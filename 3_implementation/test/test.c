#include<stdio.h>
#include "../unity/unity.h"
#include "../unity/unity_internals.h"
#include "/inc/server.h"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void
trim_newline (char *text)
{
    int len = strlen (text) - 1;
    if (text[len] == '\n')
      {
          text[len] = '\0';
      }
}

void
send_public_message (connection_info clients[], int sender, char *message_text)
{
    message msg;
    msg.type = PUBLIC_MESSAGE;
    strncpy (msg.username, clients[sender].username, 20);
    strncpy (msg.data, message_text, 256);
    int i = 0;
    for (i = 0; i < MAX_CLIENTS; i++)
      {
          if (i != sender && clients[i].socket != 0)
            {
                if (send (clients[i].socket, &msg, sizeof (msg), 0) < 0)
                  {
                      perror ("Send failed");
                      exit (1);
                  }
            }
      }
}

void
send_connect_message (connection_info * clients, int sender)
{
    message msg;
    msg.type = CONNECT;
    strncpy (msg.username, clients[sender].username, 21);
    int i = 0;
    for (i = 0; i < MAX_CLIENTS; i++)
      {
          if (clients[i].socket != 0)
            {
                if (i == sender)
                  {
                      msg.type = SUCCESS;
                      if (send (clients[i].socket, &msg, sizeof (msg), 0) < 0)
                        {
                            perror ("Send failed");
                            exit (1);
                        }
                  }
                else
                  {
                      if (send (clients[i].socket, &msg, sizeof (msg), 0) < 0)
                        {
                            perror ("Send failed");
                            exit (1);
                        }
                  }
            }
      }
    UNITY_BEGIN();
    RUN_TEST(trim_newline);
    RUN_TEST(send public message);
    RUN_TEST(send connect message);

    return UNITY_END();
}

