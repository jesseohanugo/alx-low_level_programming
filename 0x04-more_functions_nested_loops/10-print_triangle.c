#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 *
 * @size: the size of the triangle
 * Return - always void
 */
void print_triangle(int size)
{
	int height = 1;
	int width = 1;

	while (height <= size)
	{
		width = 1;
		while (width <= size)
		{
			if (width < (size + 1 - height))
				_putchar(' ');

			else
				_putchar('#');

			++width;
		}
		_putchar('\n');
		++height;
	}

	if (size <= 0)
		_putchar('\n');
}
