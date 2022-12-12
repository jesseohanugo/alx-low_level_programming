#include <stdio.h>

/**
 * main - entry point of program
 *
 * Return: 0 for normal exit of program otherwise non-zero
 */
int main(void)
{
	int i;
	int j;
	int k;
	int x;
	int y;

	int a;
	int b;

	x = 0;
	y = 9;

	for (i = x; i <= y - 2; ++i)
	{
		a = x + 1;
		for (j = a; j <= y - 1; ++j)
		{
			b = a + 1;
			for (k = b; k <= y; ++k)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (!(i == y - 2 && j == y - 1 && k == y))
				{
					putchar(',');
					putchar(' ');
				}
			}
			++a;
		}
		++x;
	}

	putchar('\n');

	return (0);
}
