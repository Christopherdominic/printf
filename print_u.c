#include "main.h"

/**
 * print_u - function for unsigned specifier
 *
 * Return: nothing
 */
void print_u(void)
{
	va_list args;
	unsigned int U = va_arg(args, unsigned int);
	char buffer[BUFFERSIZE];
	int len = snprintf(buffer, sizeof(buffer), "%u", U);

	write(1, buffer, len);
}
