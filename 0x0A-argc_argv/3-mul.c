#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two arguments
 * @argc: the number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	char *ptr;
	int num1;
	int num2;

	if (argc < 3)
	{
		puts("Error\n");
		return (1);
	}

	num1 = strtol(argv[1], &ptr, 10);
	num2 = strtol(argv[2], &ptr, 10);

	printf("%d\n", num1 * num2);

	return (0);
}
