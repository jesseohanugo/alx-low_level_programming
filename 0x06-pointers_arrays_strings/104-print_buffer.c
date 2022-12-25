#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - prints a buffer
 * @b: pointer to buffer
 * @size: size in bytes of the buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i;
	int j;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10 && i + j < size; ++j)
		{
			printf("%02x", (b[i + j]));
			(j + 1) % 2 == 0 ? putchar(' ') : 1;
		}

		for (; j < 10; ++j)
			printf("%s", (j + 1) % 2 == 0 ? "   " : "  ");

		for (j = 0; j < 10 && i + j < size; ++j)
			printf("%c", isprint(b[i + j]) ? b[i + j] : '.');

		putchar('\n');
	}

	if (size <= 0)
		putchar('\n');
}
