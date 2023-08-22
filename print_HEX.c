#include "main.h"

/**
 * print_HEX - function for %X
 *
 * Return: count
 */
int print_HEX(unsigned int num, int *count)
{
	char buffer[BUFFERSIZE];
	int lent = sprintf(buffer, "%X", num);

	*count += write(1, buffer, lent);
	return (*count);
}
