#include <stdio.h>

void compute_length(int *const, char *);
void adjust_result(int, int, char *, int);

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store result
 * @size_r: buffer size
 *
 * Return: pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a1 = 0;
	int a2 = 0;
	int l1;
	int l2;
	int i;
	int extra = 0;
	int sum = 0;
	char n1_value = '0';
	char n2_value = '0';

	compute_length(&l1, n1);
	compute_length(&l2, n2);

	for (l2 = 0; n2[l2] != '\0'; ++l2)
		;

	for (i = 0; (a1 < l1 || a2 < l2) && i < size_r - 1; ++i)
	{
		n1_value = (a1 == l1) ? '0' : n1[l1 - a1 - 1];
		n2_value = (a2 == l2) ? '0' : n2[l2 - a2 - 1];

		sum = (int) (n1_value + n2_value) + extra - 96;
		r[size_r - i - 2] = (sum % 10) + '0';
		extra = sum / 10;

		a1 = a1 == l1 ? a1 : a1 + 1;
		a2 = a2 == l2 ? a2 : a2 + 1;
	}

	if (i == (size_r - 1) && !(a1 == l1 && a2 == l2))
		return (0);

	if (extra != 0 && i == size_r - 1)
		return (0);

	if (extra != 0 && i < size_r - 1)
		r[size_r - i - 2] = extra + '0';

	adjust_result(i, size_r, r, extra);

	return (r);
}

/**
 * adjust_result - adjusts the result
 * @i: number of characters - 1
 * @size_r: size of r
 * @r: pointer to result
 * @extra: the carried value
 *
 * Return: void
 */
void adjust_result(int i, int size_r, char *r, int extra)
{
	int j;
	int tp[100000];
	int a;

	a = extra ? 0 : 1;

	if (i != 0 && i < size_r - 2)
	{
		i = i - a;
		for (j = 0; j <= i; ++j)
			tp[j] = r[size_r - i - 2  + j];

		for (j = 0; j <= i; ++j)
			r[j] = tp[j];

		for (; j < size_r - 1; ++j)
			r[j] = 0;

	}

}

/**
 * compute_length - computes the length of a string
 * @l: pointer to store length
 * @n: string
 *
 * Return: void
 */
void compute_length(int *const l, char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; ++i)
		;

	*l = i;
}
