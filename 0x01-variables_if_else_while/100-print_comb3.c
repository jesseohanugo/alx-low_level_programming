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

	x = 0;
	y = 9;

	for (i = 0; i <= y - 1; ++i)
	{
		++x;
		for (j = x; j <= y; ++j)
		{
			putchar(i + '0');
			putchar(j + '0');
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
