#include "main.h"

/**
 * print_binary - function for binary specifier
 *
 * Return: count
 */
int print_binary(unsigned int num, int *count)
{
	char digit;

	if (num > 1)
	{
		print_binary(num / 2, count);
	}

	digit = '0' + (num % 2);
	*count += write(1, &digit, 1);
	return (*count);
}
