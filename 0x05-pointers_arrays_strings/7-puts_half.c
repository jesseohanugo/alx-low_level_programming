#include "main.h"
int _strlen(char *);

/**
 * puts_half - prints the second half of a string
 * @str: the string
 *
 * Return: void
 */

void puts_half(char *str)
{
	const int length = _strlen(str);
	int start;

	start = length / 2;
	if ((length % 2) == 1)
		++start;

	while (start < length)
	{
		_putchar(*(str + start));
		++start;
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
