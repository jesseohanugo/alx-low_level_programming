/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to destination string
 */
char *_strcat(char *dest, char *src)
{
	char *begin = dest;

	while (*dest != '\0')
		++dest;

	while (*src != '\0')
	{
		*dest = *src;
		++dest;
		++src;
	}

	return (begin);
}
