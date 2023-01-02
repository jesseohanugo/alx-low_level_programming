/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: string
 * @accept: accept bytes
 *
 * Return: pointer to byte
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	j = 1;
	for (i = 0; s[i] != '\0'; ++i)
	{
		for (j = 0; accept[j] != '\0'; ++j)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	return (0);
}
