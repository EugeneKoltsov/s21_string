typedef unsigned long s21_size_t;
#define S21_NULL ((void *)0)
#define BUFF_SIZE 512

void *s21_memset(void *str, int c, s21_size_t n);
char *s21_strchr(const char *str, int c);
char *s21_strerror(int errnum);
s21_size_t s21_strlen(const char *str);
char *s21_strncat(char *dest, const char *src, s21_size_t n);
char *s21_strcpy(char *dest, const char *src);
