#ifndef MAIN_H
#define MAIN_H
#define BUFFERSIZE 1024
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
int _printf(const char *format, ...);
int print_char(int c, int *count);
int print_string(const char *s);
int print_percent(int *count);
int print_integer(int num, int *count);
int print_binary(unsigned int num, int *count);
int print_unsigned_int(unsigned int num, int *count);
int print_octal(unsigned int num, int *count);
int print_x(unsigned int num, int *count);
int print_HEX(unsigned int num, int *count);
int print_S(const char *s, int *count);
int print_p(const void *ptr, int *count);
#endif
