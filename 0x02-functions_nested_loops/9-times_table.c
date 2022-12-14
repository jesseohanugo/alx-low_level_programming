#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: always void
 */
void times_table(void)
{
	int hor;
	int ver;
	int pro;

	ver = 0;

	while (ver <= 9)
	{

		hor = 0;
		while (hor <= 9)
		{
			pro = ver * hor;

			if ((pro / 10) != 0)
			{
				_putchar('0' + (pro / 10));
				_putchar('0' + (pro % 10));
			}
			else
			{
				if (hor != 0)
					_putchar(' ');

				_putchar('0' + pro);
			}

			if (hor != 9)
			{
				_putchar(',');
				_putchar(' ');
			}

			++hor;
		}
		_putchar('\n');

		++ver;
	}
}
