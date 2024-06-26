CC=gcc
CFLAGS=-Wall -Wextra -Werror -std=c11 -g -O0
GCOVFLAGS=-fprofile-arcs -ftest-coverage
LDFLAGS=-lgcov

OS = $(shell uname)

ifeq ($(OS), Linux)
	CHECKFLAGS=-lcheck -lm
else
	CHECKFLAGS=-lcheck 
endif

all: s21_string.a test gcov_report

s21_string.a: *.c s21_string.h
	ar rcs s21_string.a *.c
	ranlib s21_string.a
	rm -rf ./*/*.o

test:
	$(CC) -c *.c
	$(CC) -c tests/*.c
	$(CC) *.o $(CHECKFLAGS) $(CFLAGS) -o test
	rm -f *.o tests/*.o

gcov_report:
	$(CC) *.c tests/*.c $(CHECKFLAGS) $(CFLAGS) $(GCOVFLAGS) $(LDFLAGS) -o report.out
	./report.out
	find ./ -type f -iname '*.gcda'
	lcov -o report.info -c -d .
	rm -rf ./cov-report
	mkdir ./cov-report
	genhtml -o ./cov-report/ report.info
	rm *.gcno *.gcda report.out report.info

clean:
	rm -rf **/*.o *.o test report.out *.gcno *.gcda *.gcov *.gch cov-report
	rm -f *.o tests/*.o report.info s21_string.a 
