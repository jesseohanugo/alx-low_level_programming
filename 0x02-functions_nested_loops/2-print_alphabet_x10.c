#include "main.h"
/**
 * print_alphabet_x10 - prints all alphabets 10 times
 *
 * Return - always void
 */
void print_alphabet_x10(void)
{
	char alphabet = 'a';
	int i;

	i = 0;

	while (i < 10)
	{
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			++alphabet;
		}

		_putchar('\n');
		++i;
	}
}
