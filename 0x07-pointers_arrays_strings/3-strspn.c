/**
 * _strspn - get length of a prefix substring
 * @s: string
 * @accept: accept bytes
 *
 * Return: no of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	int found;

	found = 1;
	i = 0;
	while (s[i] != '\0' && found == 1)
	{
		found = 0;
		for (j = 0; accept[j] != '\0' && !found; ++j)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				++i;
			}
		}
	}

	return (i);
}
