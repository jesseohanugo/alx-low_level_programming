#include "main.h"
/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return - always void
 */
void more_numbers(void)
{

	int i;
	int number;

	i = 0;

	while (i < 10)
	{
		number = 0;
		while (number <= 14)
		{
			if (number > 9)
				_putchar((number / 10) + '0');

			_putchar((number % 10) + '0');
			++number;
		}

		_putchar('\n');
		++i;
	}
}
