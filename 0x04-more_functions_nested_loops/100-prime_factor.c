#include <stdio.h>
#include <math.h>
/**
 * main - entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	long int value = 12852475143;
	int i;

	while (value % 2 == 0)
	{
		value = value / 2;
	}

	for (i = 3; i <= sqrt(value); i = i + 2)
	{
		while (value % i == 0)
			value = value / i;
	}

	if (value >= 2)
		printf("%ld\n", value);
	return (0);
}
