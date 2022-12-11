#include <stdio.h>

/**
 * main - entry point of program
 *
 * Return: 0 for normal exit of program otherwise non-zero
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; ++i)
		putchar(i + '0');

	putchar('\n');

	return (0);
}
