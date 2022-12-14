#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: The integer
 *
 * Return: Always void
 */
void print_to_98(int n)
{
	int x;
	int y;
	int increment;

	x = n;
	y = 98;
	increment = 1;


	if (n > 98)
	{
		increment = -1;
	}

	while ((x <= y && increment == 1) || (x >= y && increment == -1))
	{
		printf("%d", x);

		if (x != y)
			printf(", ");

		x = x + increment;
	}

	printf("\n");
}
