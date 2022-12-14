#include "main.h"

void print_single_digit(int, int);
void print_double_digit(int);
void print_3_digit(int);

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: a number
 *
 * Return: always void
 */
void print_times_table(int n)
{
	int hor;
	int ver;
	int pro;

	ver = 0;

	while (n > 0 && n <= 15 && ver <= n)
	{

		hor = 0;
		while (hor <= n)
		{
			pro = ver * hor;

			if ((pro / 10) == 0)
			{
				print_single_digit(hor, pro);
			}

			else if ((pro / 10) > 0 && (pro / 10) <= 9)
			{
				print_double_digit(pro);
			}

			else if ((pro / 100) > 0 && (pro / 100) <= 9)
			{
				print_3_digit(pro);
			}

			if (hor != n)
			{
				_putchar(',');
			}

			++hor;
		}
		_putchar('\n');

		++ver;
	}
}

/**
 * print_single_digit - outputs a single digit to stream
 * @hor: the horizontal number
 * @pro: the product of horizontal and vertical number
 *
 * Return: always void
 */
void print_single_digit(int hor, int pro)
{
	if (hor != 0)
	{

		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
	}

	_putchar('0' + pro);
}

/**
 * print_double_digit - outputs two digits to stream
 * @pro: the product of horizontal and vertical number
 *
 * Return: always void
 */
void print_double_digit(int pro)
{
	_putchar(' ');
	_putchar(' ');
	_putchar('0' + (pro / 10));
	_putchar('0' + (pro % 10));
}

/**
 * print_3_digit - outputs 3 digits to stream
 * @pro: the product of horizontal and vertical number
 *
 * Return: always void
 */
void print_3_digit(int pro)
{
	_putchar(' ');
	_putchar('0' + (pro / 100));
	_putchar('0' + (pro / 10) % 10);
	_putchar('0' + (pro % 10));
}
