#include "main.h"

/**
 * print_S - function for %S specifier
 * @s: pointer
 * @count: pointer to count
 *
 * Return: count
 */
int print_S(const char *s, int *count)
{
	int escape_count = 0;

	while (*s)
	{
		if (*s >= 32 && *s < 127)
		{
			write(1, s, 1);
			(*count)++;
		}
		else
		{
			char escape[5];

			snprintf(escape, sizeof(escape), "\\x%02X", (unsigned char)*s);
			write(1, escape, 4);
			(*count) += 4;
			escape_count++;
		}
		s++;
	}
	return (escape_count);
}
