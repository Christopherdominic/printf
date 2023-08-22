#include "main.h"

/**
 * print_string - function for %s specifier
 *
 * Return: count
 */
int print_string(const char *s)
{
	int count = 0;

	while (*s)
	{
		write(1, s, 1);
		s++;
		count++;
	}
	return (count);
}
