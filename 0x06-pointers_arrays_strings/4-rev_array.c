/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: no. of elements in array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int x[10000];

	for (i = 0; i < n; ++i)
		x[i] = a[i];

	for (; i > 0; --i)
		a[n - i] = x[i - 1];
}
