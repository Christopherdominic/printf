#include "main.h"

/**
 * print_string - function for %s specifier
 *
 * Return: count
 */
int print_string(char *s, int *count)
{
	write(1, s, strlen(s));
	*count += strlen(s);
	return (*count);
}
