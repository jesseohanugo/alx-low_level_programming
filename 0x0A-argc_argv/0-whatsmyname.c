#include <stdio.h>

/**
 * main - prints the program name and newline
 * @argc: the number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
