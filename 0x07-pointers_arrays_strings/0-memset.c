/**
 * _memset - fill memory with a constant byte
 * @s: pointer to memory area
 * @b: constant byte
 * @n: no of bytes of memory
 *
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
		s[i] = b;

	return (s);
}
