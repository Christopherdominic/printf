#include "main.h"

/**
 * print_char - fuction for %c specifier
 *
 * Return: count
 */
int print_char(int c, int *count)
{
	*count += write(1, &c, 1);
	return (*count);
}
