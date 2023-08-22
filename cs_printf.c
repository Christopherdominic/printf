#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - function that produces output according to a format
 * @format: pointer to string format
 *
 * Return: strings to the standard output
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
				print_char(va_arg(args, int), &count);
			else if (*format == 's')
				print_string(va_arg(args, const char *), &count);
			else if (*format == '%')
				print_percent(&count);
			else if (*format == 'd' || *format == 'i')
				print_integer(va_arg(args, int), &count);
			else if (*format == 'b')
				print_binary(va_arg(args, int), &count);
			else if (*format == 'u')
				print_unsigned_int(va_arg(args, unsigned int), &count);
			else if (*format == 'o')
				print_octal(va_arg(args, unsigned int), &count);
			else if (*format == 'x')
				print_x(va_arg(args, unsigned int), &count);
			else if (*format == 'X')
				print_HEX(va_arg(args, unsigned int), &count);
			else if (*format == 'S')
				print_S(va_arg(args, const char *), &count);
			else if (*format == 'p')
				print_p(va_arg(args, const void *), &count);
		}
		else
			print_char(*format, &count);
		format++;
	}
	va_end(args);
	return (count);
}
