#include "main.h"

/**
 * print_unsigned_int - function for %u specifier
 *
 * Return: count
 */
int print_unsigned_int(unsigned int num, int *count)
{
	char buffer[BUFFERSIZE];
	int length = sprintf(buffer, "%u", num);

	*count += write(1, buffer, length);
	return (*count);
}
