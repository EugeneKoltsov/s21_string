#include "s21_string_tests.h"

START_TEST(test_strlen_1) {
  ck_assert_int_eq(s21_strlen("Searches an internal array for the error"),
                   strlen("Searches an internal array for the error"));
}
END_TEST

START_TEST(test_strlen_2) {
  ck_assert_int_eq(s21_strlen("number errnum and returns a pointer to"),
                   strlen("number errnum and returns a pointer to"));
}
END_TEST

START_TEST(test_strlen_3) {
  ck_assert_int_eq(s21_strlen("an error message string."),
                   strlen("an error message string."));
}
END_TEST

START_TEST(test_strlen_4) {
  ck_assert_int_eq(s21_strlen("You need to declare macros"),
                   strlen("You need to declare macros"));
}
END_TEST

START_TEST(test_strlen_5) {
  ck_assert_int_eq(s21_strlen("containing arrays of error messages for mac"),
                   strlen("containing arrays of error messages for mac"));
}
END_TEST

START_TEST(test_strlen_6) {
  ck_assert_int_eq(s21_strlen("linux operating systems"),
                   strlen("linux operating systems"));
}
END_TEST

START_TEST(test_strlen_7) {
  ck_assert_int_eq(s21_strlen("Error descriptions are available"),
                   strlen("Error descriptions are available"));
}
END_TEST

START_TEST(test_strlen_8) {
  ck_assert_int_eq(s21_strlen("   "), strlen("   "));
}
END_TEST

START_TEST(test_strlen_9) { ck_assert_int_eq(s21_strlen(""), strlen("")); }
END_TEST

START_TEST(test_strlen_10) {
  ck_assert_int_eq(s21_strlen("1234567890"), strlen("1234567890"));
}
END_TEST

Suite* suite_s21_strlen(void) {
  Suite* suite;
  TCase* core;

  suite = suite_create("s21_strlen");
  core = tcase_create("Core");

  tcase_add_test(core, test_strlen_1);
  tcase_add_test(core, test_strlen_2);
  tcase_add_test(core, test_strlen_3);
  tcase_add_test(core, test_strlen_4);
  tcase_add_test(core, test_strlen_5);
  tcase_add_test(core, test_strlen_6);
  tcase_add_test(core, test_strlen_7);
  tcase_add_test(core, test_strlen_8);
  tcase_add_test(core, test_strlen_9);
  tcase_add_test(core, test_strlen_10);

  suite_add_tcase(suite, core);

  return (suite);
}
