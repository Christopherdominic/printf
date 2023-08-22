#ifndef MAIN_H
#define MAIN_H
#define BUFFERSIZE 1024
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
int _printf(const char *format, ...);
int print_char(int c, int *count);
int print_string(char *s, int *count);
int print_percent(int *count);
#endif
