#include "main.h"
/**
 * jack_bauer - prints every minute of day of Jack Bauer
 *
 * Return: always void
 */
void jack_bauer(void)
{
	int hour;
	int minute;

	hour = 0;

	while (hour <= 23)
	{
		minute = 0;

		while (minute <= 59)
		{
			_putchar('0' + (hour / 10));
			_putchar('0' + (hour % 10));
			_putchar(':');
			_putchar('0' + (minute / 10));
			_putchar('0' + (minute % 10));
			_putchar('\n');

			++minute;
		}

		++hour;
	}
}
