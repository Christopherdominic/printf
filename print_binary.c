#include "main.h"

/**
 * print_binary - function that convert int to binary
 * @num: variable to the integer
 *
 * Return: nothing
 */
int print_binary(unsigned int num)
{
	char digit;

	if (num > 1)
	{
		print_binary(num / 2);
	}
	digit = '0' + (num % 2);
	return (write(1, &digit, 1));
}
