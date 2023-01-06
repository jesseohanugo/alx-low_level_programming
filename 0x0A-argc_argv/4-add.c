#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: the number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	char *ptr;
	int i;
	int n;
	int sum;

	if (argc < 2)
	{
		puts("0");
		return (1);
	}

	sum = 0;
	for (i = 1; i < argc; ++i)
	{
		n = strtol(argv[i], &ptr, 10);

		if (*ptr != '\0')
		{
			puts("Error");
			return (1);
		}

		sum += n;
	}

	printf("%d\n", sum);

	return (0);
}
