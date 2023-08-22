#include "main.h"

/**
 * print_p - function for %p specifier
 *
 * Return: outcome
 */
int print_p(const void *ptr, int *count)
{
	intptr_t addr = (intptr_t)ptr;
	char buffer[BUFFERSIZE];
	int len = snprintf(buffer, sizeof(buffer), "%p", (void *)addr);

	write(1, buffer, len);
	(*count) += len;
	return (*count);
}
