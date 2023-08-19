#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: pointer to string format
 *
 * Return: strings to the standard output
 */
int _printf(const char *format, ...)
{
	int count;
	char c;
	char *s;
	char %;

	count = 0;
	va_list args;
	va_start(args, format);

	va_arg(args, int);

	va_end(format)
}
