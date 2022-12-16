#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 *
 * @n: the number of times the character _ should be printed
 * Return - always void
 */
void print_line(int n)
{
	int number = 0;

	while (number < n)
	{
		_putchar('_');
		++number;
	}
	_putchar('\n');
}
