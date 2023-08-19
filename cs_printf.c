#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: pointer to string format
 *
 * Return: strings to the standard output
 */
int _printf(const char *format, ...)
{
	int c = 0;
	va_list args;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				int cs = va_arg(args, int);

				write(1, &cs, 1);
				c++;
			}
			else if (*format == 's')
			{
				char *s = va_arg(args, char *);

				write(1, s, strlen(s));
				c += strlen(s);
			}
			else if (*format == 'd' || *format == 'i')
			{
				int d = va_arg(args, int);
				char buffer[20];
				int len = snprintf(buffer, sizeof(buffer), "%d", d);

				write(1, buffer, len);
				c += len;
			}
			else if (*format == 'b')
			{
				unsigned int num = va_arg(args, unsigned int);

				print_binary(num);
				c++;
			}
			else if (*format == '%')
			{
				write(1, "%", 1);
				c++;
			}
		}
		else
		{
			write(1, format, 1);
			c++;
		}
		format++;
	}
	va_end(args);
	return (c);
}
