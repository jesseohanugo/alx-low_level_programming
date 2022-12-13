#include "main.h"
/**
 * _abs - computes the absolute of an integer
 * @n: The integer
 *
 * Return: the absolute of the integer n.
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-1 * n);
}
