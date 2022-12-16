#include "main.h"
/**
 * print_diagonal - draws a diagonal line in the terminal
 *
 * @n: the number of times the character \ should be printed
 * Return - always void
 */
void print_diagonal(int n)
{
	int number = 0;
	int spacing = 0;

	while (number < n)
	{
		spacing = 0;
		while (spacing < number)
		{
			_putchar(' ');
			++spacing;
		}

		_putchar('\\');
		_putchar('\n');
		++number;
	}

	if (n <= 0)
		_putchar('\n');
}
