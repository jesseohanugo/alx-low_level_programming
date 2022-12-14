#include "main.h"
/**
 * is_palindrome - checks if string is palindrome
 * @s: string
 *
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int index;

	if (*s == '\0')
		return (1);

	index = get_index(s);
	return (check_palindrome(s, index));
}

/**
 * check_palindrome - finds palindrome
 * @pd: palindrome string
 * @index: end of string
 *
 * Return: 1 or 0
 */
int check_palindrome(char *pd, int index)
{
	if (*pd == '\0')
		return (1);

	if (*pd != pd[index])
		return (0);

	return (check_palindrome(pd + 1, index - 2));
}

/**
 * get_index - returns index of last element
 * @s: string
 *
 * Return: index of last element
 */
int get_index(char *s)
{
	if (*s == '\0')
		return (-1);

	return (get_index(s + 1) + 1);
}
