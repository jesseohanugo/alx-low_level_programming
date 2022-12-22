/**
 * cap_string - capitalizes all words of a string
 * @s: the string
 *
 * Return: pointer to the string
 */
char *cap_string(char *s)
{
	int i;
	int j;
	char capitalize = 'y';
	char *sp = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (capitalize == 'y' && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] = s[i] - 32;

		capitalize = 'n';
		for (j = 0; sp[j] != '\0' && capitalize == 'n'; ++j)
		{
			if (s[i] == sp[j])
				capitalize = 'y';
		}
	}

		return (s);
}
