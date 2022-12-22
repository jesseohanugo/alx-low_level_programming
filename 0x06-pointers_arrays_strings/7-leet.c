/**
 * leet - encodes a string into 1337
 * @s: the string
 *
 * Return: pointer to s
 */
char *leet(char *s)
{
	int i;
	int j;
	char *a = "aeotl";
	char *b = "43071";

	for (i = 0; s[i] != '\0'; ++i)
	{
		for (j = 0; a[j] != '\0'; ++j)
		{
			if (s[i] == a[j] || s[i] == a[j] - 32)
				s[i] = b[j];
		}
	}

	return (s);
}
