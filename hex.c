#include "main.h"

/**
 * print_hex - function that convert int to hex
 * @num: variable to the integer
 *
 * Return: nothing
 */
void print_hex(unsigned int num)
{
	char digit;

	if (num > 1)
		print_hex(num / 16);
	digit = "0123456789ABCDEF"[num % 16];
	write(1, &digit, 1);
}
