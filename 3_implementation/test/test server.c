#include<stdio.h>
#include "../unity/unity.h"
#include "../unity/unity_internals.h"
#include "/inc/server.h"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown()

void
test_trim_newline ()
{
   TEST_ASSERT_EQUAL(-1,text[len]("/n);

}

void
test_send_public_message (connection_info clients[], int sender, char *message_text)
{
   TEST_ASSERT_EQUAL(-1, i != sender && clients[i].socket != 0)
}

void
test_send_connect_message (connection_info * clients, int sender)
{
    TEST_ASSERT_EQUAL(-1,clients[i].socket != 0)
      }
    UNITY_BEGIN();
    RUN_TEST(test_trim_newline);
    RUN_TEST(test_send_public_message);
    RUN_TEST(test_send_connect =_message);

    return UNITY_END();
}

