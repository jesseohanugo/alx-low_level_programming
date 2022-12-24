#include <stdio.h>
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
	int n1_end = 0;
	int n2_end = 0;
	char n1_value = '0';
	char n2_value = '0';

	for (l1 = 0; n1[l1] != '\0'; ++l1);
	for (l2 = 0; n2[l2] != '\0'; ++l2);

	printf("l1 - %d\n", l1);
	printf("l2 - %d\n", l2);
	printf("r - %s\n", r);
	printf("size_r - %d\n", size_r);

	for (i = 0; (a1 < l1 || a2 < l2) && i < size_r; ++i)
	{
		if (!n1_end && a1 == l1)
			n1_end = 1;

		if (!n2_end && a2 == l2)
			n2_end = 1;
		
		n1_value = n1_end ? '0' : n1[l1 - a1 - 1];
		n2_value = n2_end ? '0' : n2[l2 - a2 - 1];

		sum = (int) (n1_value + n2_value) + extra - 96;
		r[size_r - i - 1] = (sum % 10) + '0';
		extra = sum / 10;
		printf("n1_value - %c\n", n1_value);
		printf("n2_value - %c\n", n2_value);
		printf("sum - %d\n", sum);
		printf("extra - %d\n", extra);
		printf("size_r - i - 1 = %d\n", size_r - i - 1);
		printf("r[%d] = %c\n", size_r - i - 1, r[size_r - i - 1]);
		printf("r - %s\n", r);

		if (!n1_end)
			++a1;

		if (!n2_end)
			++a2;
	}

	if (i == size_r && !(n1_end && n2_end))
		return 0;

	if (extra != 0 && i < size_r)
		r[size_r - i - 1] = extra;

	return (r);
}
