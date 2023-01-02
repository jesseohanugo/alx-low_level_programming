/**
 * _strstr - locate a substring
 * @haystack: the containing string
 * @needle: the search string
 *
 * Return: pointer to beginning of located substring
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;
	int match = 0;

	for (i = 0; needle[i] != '\0'; ++i)
	{
		for (j = 0; haystack[j] != '\0'; ++j)
		{
			if (needle[i] == haystack[j])
			{
				match = 1;
				for (k = 1; needle[i + k] != '\0' && match; ++k)
				{
					if (needle[i + k] != haystack[j + k])
						match = 0;
				}

				if (match)
					return (haystack + j);
			}
		}
	}

	return (0);
}
