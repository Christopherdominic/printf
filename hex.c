#include "main.h"

/**
 * print_hex - function that convert int to hex
 * @num: variable to the integer
 *
 * Return: nothing
 */
void print_hex(unsigned int hex)
{
	char digit;
	
	if (hex > 1)
	{
		print_hex(hex / 16);
	}
	digit = "0123456789ABCDEF"[hex % 16];
	write(1, &digit, 1);
}
