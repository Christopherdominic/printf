#include "main.h"

/**
 * print_x - function for %x specifier
 *
 * Return: count
 */
int print_x(unsigned int num, int *count)
{
	char buffer[BUFFERSIZE];
	int len = sprintf(buffer, "%x", num);

	*count += write(1, buffer, len);
	return(*count);
}
