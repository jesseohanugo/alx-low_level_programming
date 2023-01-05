#include "main.h"

/**
 * _sqrt_recursion - computes natural square root
 * @n: number
 *
 * Return: square root of number
 */
int _sqrt_recursion(int n)
{
	return (find_root(n, 1));
}

/**
 * find_root - gets the square root of a number
 * @n: the number
 * @root: the root
 *
 * Return: root
 */
int find_root(int n, int root)
{
	if (n < 1)
		return (-1);

	if (root * root == n)
		return (root);

	if (root == n)
		return (-1);


	return (find_root(n, root + 1));
}
