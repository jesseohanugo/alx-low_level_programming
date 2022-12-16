#include "main.h"
/**
 * print_numbers - prints the numbers from 0 - 9, followed by a new line.
 *
 * Return - always void
 */
void print_numbers(void)
{
	char number = '0';

	while (number <= '9')
	{
		_putchar(number);
		++number;
	}
	_putchar('\n');
}
