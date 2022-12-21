#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the string
 *
 * Return: void
 */

void puts2(char *str)
{
	int show = 1;

	while (*str != '\0')
	{
		if (show)
			_putchar(*str);
		show = show ? 0 : 1;
		++str;
	}

	_putchar('\n');
}
