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
