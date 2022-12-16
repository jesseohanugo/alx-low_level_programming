#include "main.h"
/**
 * print_square - prints a square, followed by a new line
 *
 * @size: the size of the square
 * Return - always void
 */
void print_square(int size)
{
	int height = 0;
	int width = 0;

	while (height < size)
	{
		width = 0;
		while (width < size)
		{
			_putchar('#');
			++width;
		}
		_putchar('\n');
		++height;
	}

	if (size <= 0)
		_putchar('\n');
}
