#ifndef S21_STRING_TESTS_H_
#define S21_STRING_TESTS_H_

#include <check.h>
#include <stdio.h>

#include "../s21_string.h"

Suite *suite_s21_memset(void);
Suite *suite_s21_strchr(void);
Suite *suite_s21_strncat(void);
Suite *suite_s21_strlen(void);

void run_tests(void);
void run_suite(Suite *suitecase);

#endif  // S21_STRING_TESTS_H_
