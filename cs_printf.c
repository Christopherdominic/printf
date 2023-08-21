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
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				int c = va_arg(args, int);

				count += write(1, &c, 1);
			}
			else if (*format == 's')
			{
				char *s = va_arg(args, char *);

				write(1, s, strlen(s));
				count += strlen(s);
			}
			else if (*format == 'd' || *format == 'i')
			{
				print_d_i();
				count++;
			}

			else if (*format == 'b')
			{
				print_binary(va_arg(args, int));
				count++;
			}
			else if (*format == 'x' || *format == 'X')
			{
				print_hex(va_arg(args, int));
				count++;
			}
			else if (*format == '%')
				count += write(1, "%", 1);
		}
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(args);
	return (count);
}
