#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long int b;
	long int x = 1;
	long int a = 1;
	unsigned long int sum;
	
	while (a <= 4000000)
	{
		if (a % 2 == 0)
			sum += a;

		b = x + a;
		x = a;
		a = b;
	}
	printf("%lu\n", sum);
	return (0);
}
