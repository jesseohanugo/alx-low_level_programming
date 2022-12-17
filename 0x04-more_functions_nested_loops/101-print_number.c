#include "main.h"
/**
 * print_number - prints an integer using _putchar
 * @n: number to be printed
 *
 * Return - always void
 */
void print_number(int n)
{
	unsigned int val = 0;

	if (n < 0)
	{
		_putchar('-');
		val = -n;
	}
	else
		val = n

	if (val / 10)
		print_number(val / 10);

	_putchar((val % 10) + '0');
}
