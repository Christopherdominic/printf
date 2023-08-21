#include "main.h"

/**
 * print_d_i - function for integer specifier
 *
 * Return: nothing
 */
void print_d_i(void)
{
	va_list args;
	int d = va_arg(args, int);
	char buffer[BUFFERSIZE];
	int len = snprintf(buffer, sizeof(buffer), "%d", d);

	 write(1, buffer, len);
}
