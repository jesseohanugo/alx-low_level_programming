#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point for program
 *
 * Return: 0 if main exited successfully, non-zero for abnormal termination
 */

int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n < 0)
		printf("%d is %s", n, "negative");

	else if (n > 0)
		printf("%d is %s", n, "positive");

	else
		printf("%d is %s", n, "zero");

	printf("\n");
	return (0);
}
