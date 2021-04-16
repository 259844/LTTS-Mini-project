
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <pthread.h>

#define MAX_CLIENTS 10

void
trim_newline (char *text);


void
initialize_server (connection_info * server_info, int port);


void
send_public_message (connection_info clients[], int sender, char *message_text);


void
send_private_message (connection_info clients[], int sender, char *username, char *message_text);


void
send_connect_message (connection_info * clients, int sender);


void
send_disconnect_message (connection_info * clients, char *username);


void
send_user_list (connection_info * clients, int receiver);


void
send_too_full_message (int socket);


void
stop_server (connection_info connection[]);


void
handle_client_message (connection_info clients[], int sender);


int
construct_fd_set (fd_set * set, connection_info * server_info, connection_info clients[]);


void
handle_new_connection (connection_info * server_info, connection_info clients[]);


void
handle_user_input (connection_info clients[]);


int
main (int argc, char *argv[]);
