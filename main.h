#ifndef MAIN_H
#define MAIN_H
#define BUFFERSIZE 1024
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
int _printf(const char *format, ...);
void print_binary(unsigned int num);
void print_hex(unsigned int hex);
void print_d_i(void);
void print_u(void);
void print_r(void);
#endif
