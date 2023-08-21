#include "main.h"

/**
 * print_r - function for %r specifier
 *
 * Return: nothing
 */
void print_r(void)
{
	va_list args;
	char *s = va_arg(args, char *);
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		char c = s[i];

		if ('a' <= c && c <= 'z')
			c = 'a' + (c - 'a' + 13) % 26;
		else if ('A' <= c && c <= 'Z')
			c = 'A' + (c - 'A' + 13) % 26;
		write(1, &c, 1);
	}
}
