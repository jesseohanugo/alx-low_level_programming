int _strlen(char *);

/**
 * _strcpy - copy string from src to dest
 * @dest: pointer to destination
 * @src: pointer to source
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int length = _strlen(src);
	int i = 0;

	while (i <= length)
	{
		dest[i] = src[i];
		++i;
	}

	return (dest);
}

/**
 * _strlen - returns the length of a string
 * @s: the string
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		++count;
		++s;
	}

	return (count);
}
