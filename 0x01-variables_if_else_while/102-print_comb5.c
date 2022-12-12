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
	int x;
	int y;

	int d1;
	int d2;
	int d3;
	int d4;

	x = 0;
	y = 99;

	for (i = 0; i <= y - 1; ++i)
	{
		++x;
		for (j = x; j <= y; ++j)
		{
			d1 = i / 10;
			d2 = i % 10;
			d3 = j / 10;
			d4 = j % 10;
			putchar(d1 + '0');
			putchar(d2 + '0');
			putchar(' ');
			putchar(d3 + '0');
			putchar(d4 + '0');

			if (!(i == y - 1 && j == y))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
