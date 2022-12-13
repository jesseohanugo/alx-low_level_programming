#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *strPtr;

	strPtr = "_putchar";

	while (*strPtr != '\0')
	{
		_putchar(*strPtr);
		++strPtr;
	}

	_putchar('\n');
	return (0);
}
