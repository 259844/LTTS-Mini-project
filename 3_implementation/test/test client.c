#include<stdio.h>
#include "../unity/unity.h"
#include "../unity/unity_internals.h"
#include " /inc/client.h
void setUp(){}
void tearDown(){}
char confirm;
void check(void)
  
  void
test get_username ()
{
  TEST_ASSERT_EQUAL(-1, 20);
}
void
test set_username ()
{
   TEST_ASSERT_EQUAL(-1, -2);
}
  int
test main()
  {
    TEST_ASSERT_EQUAL(-1, 3);
  }
  int test_main(void)
{
    /* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_get_username);
  RUN_TEST(test_set_username);
  RUN_TEST(test_connect_server);
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}
