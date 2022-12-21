#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a newline
 * @s: the string
 *
 * Return: void
 */

void print_rev(char *s)
{
	char *begin = s;

	while (*(s + 1) != '\0')
	{
		++s;
	}

	while (s >= begin)
	{
		_putchar(*s);
		--s;
	}

	_putchar('\n');
}
