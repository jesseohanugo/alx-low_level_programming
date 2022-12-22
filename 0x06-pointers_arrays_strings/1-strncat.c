/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: no. of bytes
 *
 * Return: pointer to destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *destStart = dest;
	char *srcStart = src;

	while (*destStart != '\0')
		++destStart;

	while (*srcStart != '\0' && n > 0)
	{
		*destStart = *srcStart;
		++destStart;
		++srcStart;
		--n;
	}

	return (dest);
}
