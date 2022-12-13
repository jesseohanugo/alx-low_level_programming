#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: The number with a sign
 *
 * Return: 1, 0, -1 if n > 0, n = 0 and n < 0 respectively.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
