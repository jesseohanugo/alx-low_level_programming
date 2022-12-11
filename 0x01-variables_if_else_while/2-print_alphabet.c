#include <stdio.h>

/**
 * main - entry point of program
 *
 * Return: 0 for normal exit of program otherwise non-zero
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
