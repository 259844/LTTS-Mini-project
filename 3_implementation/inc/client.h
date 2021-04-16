
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <sys/socket.h>
#include <arpa/inet.h>

#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"
#define RESET "\033[0m"

void
trim_newline (char *text)
  
 
 void
get_username (char *username)
  
  
 void
set_username (connection_info * connection)

  
 void
stop_client (connection_info * connection)
  
  
 void
connect_to_server (connection_info * connection, char *address, char *port)
  
  
 void
handle_user_input (connection_info * connection)
  
  
  
 void
handle_server_message (connection_info * connection)
  
  
  
