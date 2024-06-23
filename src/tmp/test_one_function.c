#include <stdio.h>
#include <string.h>

#include "s21_string.h"

int main() {
  // int n;
  // printf("enter error number: ");
  // scanf("%d", &n);
  for (int i = 0; i < 135; i++) {
    printf("%d %s\n", i, s21_strerror(i));
    printf("%d %s\n", i, strerror(i));
  }
  return 0;
}
