#include "main.h"
int _strlen(char *);

/**
 * print_rev - prints a string in reverse followed by a newline
 * @s: the string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int length = _strlen(s);
	int i = length;

	while (i > 0)
	{
		_putchar(s[i - 1]);
		--i;
	}

	_putchar('\n');
}

/**
 * _strlen - returns the length of a string
 * @s: the string
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		++count;
		++s;
	}

	return (count);
}
