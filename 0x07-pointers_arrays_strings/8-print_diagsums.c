#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonals
 * @a: square matrix array
 * @size: matrix size
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int sum1 = 0;
	int sum2 = 0;

	while (size > 0 && i < size * size)
	{
		sum1 += a[i];
		i += size + 1;
	}

	j += size - 1;
	while (size > 0 && j <= size * (size - 1))
	{
		sum2 += a[j];
		j += size - 1;
	}

	printf("%d, %d\n", sum1, sum2);
}
