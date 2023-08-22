#include "main.h"

/**
 * print_octal - function for %o specifier
 *
 * Return: count
 */
int print_octal(unsigned int num, int *count)
{
	char buffer[BUFFERSIZE];
	int len = sprintf(buffer, "%o", num);

	*count += write(1, buffer, len);
	return (*count);
}
