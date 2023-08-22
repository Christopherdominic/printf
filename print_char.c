#include "main.h"

/**
 * print_char - fuction for %c specifier
 * @c: variable
 * @count: pointer to the count variable
 * Return: count
 */
int print_char(int c, int *count)
{
	*count += write(1, &c, 1);
	return (*count);
}
