#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 *
 * @size: the size of the triangle
 * Return - always void
 */
void print_triangle(int size)
{
	int height = 0;
	int width = 0;

	while (height < size)
	{
		width = 0;
		while (width <= height)
		{
			if (width < size - height - 1)
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
