#include "main.h"
/**
 * print_alphabet_x10 - prints all alphabets 10 times
 *
 * Return - always void
 */
void print_alphabet_x10(void)
{

	int i;
	char alphabet;

	i = 0;

	while (i < 10)
	{
		alphabet = 'a';
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			++alphabet;
		}

		_putchar('\n');
		++i;
	}
}
