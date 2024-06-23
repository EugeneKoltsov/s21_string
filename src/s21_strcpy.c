#include "s21_string.h"

char *s21_strcpy(char *dest, const char *src) {
  char *save = dest;
  for (; (*dest = *src) != '\0'; ++dest, ++src) {
  }
  if (*src == '\0') *dest = '\0';
  return (save);
}
