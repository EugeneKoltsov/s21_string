#include <locale.h>
#include <stdio.h>

#include "s21_string_tests.h"

int main(void) {
  run_tests();

  return 0;
}

void run_tests(void) {
  Suite *list_suites[] = {suite_s21_strerror(), NULL};

  for (Suite **current_suite = list_suites; *current_suite != NULL;
       current_suite++) {
    run_suite(*current_suite);
  }
}
void run_suite(Suite *suitecase) {
  setlocale(LC_ALL, "");
  static int counter_testcase = 1;

  if (counter_testcase > 1) putchar('\n');
  printf("%s%d%s", "CURRENT TEST: ", counter_testcase, "\n");
  counter_testcase++;

  SRunner *sr = srunner_create(suitecase);

  srunner_set_fork_status(sr, CK_NOFORK);
  srunner_run_all(sr, CK_NORMAL);

  srunner_free(sr);
}
