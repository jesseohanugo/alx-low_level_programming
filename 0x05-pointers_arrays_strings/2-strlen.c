/**
 * _strlen - finds the length of a string
 * @s: the string
 *
 * Return: string length
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
