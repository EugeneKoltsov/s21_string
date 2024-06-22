#include "s21_string_tests.h"

START_TEST(test_strchr_1) {
  ck_assert_ptr_eq(s21_strchr("proverka", 'e'), strchr("proverka", 'e'));
}
END_TEST

START_TEST(test_strchr_2) {
  ck_assert_ptr_eq(s21_strchr("Appends", 'p'), strchr("Appends", 'p'));
}
END_TEST

START_TEST(test_strchr_3) {
  ck_assert_ptr_eq(s21_strchr("the string pointed to", ' '),
                   strchr("the string pointed to", ' '));
}
END_TEST

START_TEST(test_strchr_4) {
  ck_assert_ptr_eq(s21_strchr("the string pointed to", 'd'),
                   strchr("the string pointed to", 'd'));
}
END_TEST

START_TEST(test_strchr_5) {
  ck_assert_ptr_eq(s21_strchr("Calculates", 's'), strchr("Calculates", 's'));
}
END_TEST

START_TEST(test_strchr_6) {
  ck_assert_ptr_eq(s21_strchr("unsigned char", 'c'),
                   strchr("unsigned char", 'c'));
}
END_TEST

START_TEST(test_strchr_7) {
  ck_assert_ptr_eq(s21_strchr("hello", '\n'), strchr("hello", '\n'));
}
END_TEST

START_TEST(test_strchr_8) {
  ck_assert_ptr_eq(s21_strchr("number", 'b'), strchr("number", 'b'));
}
END_TEST

START_TEST(test_strchr_9) {
  ck_assert_ptr_eq(s21_strchr("1234567890", '7'), strchr("1234567890", '7'));
}
END_TEST

START_TEST(test_strchr_10) {
  ck_assert_ptr_eq(s21_strchr("0987654321", '3'), strchr("0987654321", '3'));
}
END_TEST

Suite* suite_s21_strchr(void) {
  Suite* suite;
  TCase* core;

  suite = suite_create("s21_strchr");
  core = tcase_create("Core");

  tcase_add_test(core, test_strchr_1);
  tcase_add_test(core, test_strchr_2);
  tcase_add_test(core, test_strchr_3);
  tcase_add_test(core, test_strchr_4);
  tcase_add_test(core, test_strchr_5);
  tcase_add_test(core, test_strchr_6);
  tcase_add_test(core, test_strchr_7);
  tcase_add_test(core, test_strchr_8);
  tcase_add_test(core, test_strchr_9);
  tcase_add_test(core, test_strchr_10);

  suite_add_tcase(suite, core);

  return (suite);
}
