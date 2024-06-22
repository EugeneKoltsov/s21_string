#include "s21_string_tests.h"

START_TEST(test_strncat_1) {
  char src[] = "Appends the string";
  char dest1[256] = "line";
  char dest2[256] = "line";
  ck_assert_str_eq(s21_strncat(dest1, src, 7), strncat(dest2, src, 7));
}
END_TEST

START_TEST(test_strncat_2) {
  char src[] = "Appends the string1234567890";
  char dest1[256] = "line";
  char dest2[256] = "line";
  ck_assert_str_eq(s21_strncat(dest1, src, 1), strncat(dest2, src, 1));
}
END_TEST

START_TEST(test_strncat_3) {
  char src[] = "end of the string";
  char dest1[256] = "line";
  char dest2[256] = "line";
  ck_assert_str_eq(s21_strncat(dest1, src, 15), strncat(dest2, src, 15));
}
END_TEST

START_TEST(test_strncat_4) {
  char src[] = "end of the string";
  char dest1[256] = "          ";
  char dest2[256] = "          ";
  ck_assert_str_eq(s21_strncat(dest1, src, 4), strncat(dest2, src, 4));
}
END_TEST

START_TEST(test_strncat_5) {
  char src[] = "end of the string";
  char dest1[256] = "1234567890";
  char dest2[256] = "1234567890";
  ck_assert_str_eq(s21_strncat(dest1, src, 10), strncat(dest2, src, 10));
}
END_TEST

START_TEST(test_strncat_6) {
  char src[] = "end of the string";
  char dest1[256] = "0987654321";
  char dest2[256] = "0987654321";
  ck_assert_str_eq(s21_strncat(dest1, src, 9), strncat(dest2, src, 9));
}
END_TEST

START_TEST(test_strncat_7) {
  char src[] = "end of the string";
  char dest1[256] = "0987654321";
  char dest2[256] = "0987654321";
  ck_assert_str_eq(s21_strncat(dest1, src, 15), strncat(dest2, src, 15));
}
END_TEST

START_TEST(test_strncat_8) {
  char src[] = "end of the string";
  char dest1[256] = "123";
  char dest2[256] = "123";
  ck_assert_str_eq(s21_strncat(dest1, src, 2), strncat(dest2, src, 2));
}
END_TEST

START_TEST(test_strncat_9) {
  char src[] = "/";
  char dest1[256] = "555";
  char dest2[256] = "555";
  ck_assert_str_eq(s21_strncat(dest1, src, 11), strncat(dest2, src, 11));
}
END_TEST

START_TEST(test_strncat_10) {
  char src[] = "Appends";
  char dest1[256] = "555";
  char dest2[256] = "555";
  ck_assert_str_eq(s21_strncat(dest1, src, 15), strncat(dest2, src, 15));
}
END_TEST

Suite* suite_s21_strncat(void) {
  Suite* suite;
  TCase* core;

  suite = suite_create("s21_strncat");
  core = tcase_create("Core");

  tcase_add_test(core, test_strncat_1);
  tcase_add_test(core, test_strncat_2);
  tcase_add_test(core, test_strncat_3);
  tcase_add_test(core, test_strncat_4);
  tcase_add_test(core, test_strncat_5);
  tcase_add_test(core, test_strncat_6);
  tcase_add_test(core, test_strncat_7);
  tcase_add_test(core, test_strncat_8);
  tcase_add_test(core, test_strncat_9);
  tcase_add_test(core, test_strncat_10);

  suite_add_tcase(suite, core);

  return (suite);
}
