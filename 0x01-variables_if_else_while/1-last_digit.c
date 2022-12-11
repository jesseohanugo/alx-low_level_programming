#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point for the program
 *
 * Return: 1 if the main exits successfully
 * Description: this is where the program begins.
 */

int main(void)
{
	int n;
	int last_digit;
	char *valueString;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;
	if (last_digit > 5)
	{
		valueString = "greater than 5";
	}
	else if ((last_digit < 6) && (last_digit != 0))
	{
		valueString = "less than 6 and not zero";
	}
	else
	{
		valueString = "0";
	}

	printf("Last digit of %d is %d and is %s\n", n, last_digit, valueString);
	return (0);
}
