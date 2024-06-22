#include "s21_string.h"

char *s21_strchr(const char *str, int c) {
  while (*str != c && *str) str++;
  return *str == c ? (char *)str : S21_NULL;
}
