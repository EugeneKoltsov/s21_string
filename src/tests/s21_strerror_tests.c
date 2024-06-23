#include <string.h>

#include "s21_string_tests.h"

#if defined(__APPLE__) || defined(__MACH__)
#define S21_ERRLIST_SIZE 107
#endif
#if defined(__linux__)
#define S21_ERRLIST_SIZE 134
#endif

START_TEST(test_strerror) {
  for (int i = 0; i < S21_ERRLIST_SIZE; i++) {
    ck_assert_str_eq(s21_strerror(i), strerror(i));
  }
  ck_assert_str_eq(s21_strerror(155), strerror(155));
}
END_TEST

Suite* suite_s21_strerror(void) {
  Suite* suite;
  TCase* core;

  suite = suite_create("s21_strerror");
  core = tcase_create("Core");

  tcase_add_test(core, test_strerror);

  suite_add_tcase(suite, core);

  return (suite);
}
