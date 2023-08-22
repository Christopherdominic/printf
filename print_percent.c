#include "main.h"

/**
 * print_percent - function for %% specifier
 *
 * Return: count
 */
int print_percent(int *count)
{
	write(1, "%", 1);
	(*count)++;
	return (*count);
}
