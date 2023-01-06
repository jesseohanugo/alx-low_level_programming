#include <stdio.h>

/**
 * main - prints all argument it receives
 * @argc: the number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; ++i)
		printf("%s\n", argv[i]);

	return (0);
}
