#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: the number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int num;
	int coinCount;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}

	num = atoi(argv[1]);

	for (coinCount = 0; num > 0; ++coinCount)
	{
		if (num >= 25)
			num -= 25;

		else if (num >= 10)
			num -= 10;

		else if (num >= 5)
			num -= 5;

		else if (num >= 2)
			num -= 2;

		else if (num >= 1)
			num -= 1;
	}

	printf("%d\n", coinCount);

	return (0);
}
