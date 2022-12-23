/**
 * rot13 - encodes a string using rot13
 * @s: pointer to the string
 *
 * Return: pointer to s
 */
char *rot13(char *s)
{
	char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	int i;
	int j;

	for (i = 0; s[i] != '\0'; ++i)
	{
		for (j = 0; input[j] != '\0'; ++j)
		{
			if (s[i] == input[j])
			{
				s[i] = output[j];
				break;
			}
		}
	}

	return (s);
}
