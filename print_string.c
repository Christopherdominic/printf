#include "main.h"

/**
 * print_string - function for %s specifier
 *@s: pointer to the string
 * Return: count
 */
int print_string(const char *s, int *count)
{
	while (*s)
	{
		write(1, s, 1);
		s++;
		(*count)++;
	}
	return (*count);
}
