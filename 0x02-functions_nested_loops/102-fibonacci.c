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

	int i = 0;

	while (i < 50)
	{
		printf("%ld, ", a);
		b = x + a;
		x = a;
		a = b;
		++i;
	}
	return (0);
}
