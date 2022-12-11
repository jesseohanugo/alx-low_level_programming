#include <stdio.h>

/**
 * main - entry point of program
 *
 * Return: 0 for normal exit of program otherwise non-zero
 */
int main(void)
{
	char alphabet;

	int number;

	for (number = 0; number < 10; number++)
		putchar(number + '0');

	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
