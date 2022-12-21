int _strlen(char *);

/**
 * rev_string - reverses a string
 * @s: the string
 *
 * Return: void
 */
void rev_string(char *s)
{
	const int length = _strlen(s);
	char temporary_string[10000];
	int i = 0;

	while (i < length)
	{
		temporary_string[i] = *(s + i);
		++i;
	}

	i = 0;
	while (i < length)
	{
		*(s + length - 1 - i) = temporary_string[i];
		++i;
	}
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
