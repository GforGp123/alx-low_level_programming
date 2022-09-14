#include "main.h"
/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59.
 * Return: Nothing
 */
void jack_bauer(void)
{
	int t = 0;

	for (; t <= 23; t++)
	{
		int m = 0;

		while (m <= 59)
		{
			_putchar(t / 10 + 48);
			_putchar(t % 10 + 48);
			_putchar(':');
			_putchar(m / 10 + 48);
			_putchar(m % 10 + 48);
			_putchar('\n');
			m++;
		}
	}
}
