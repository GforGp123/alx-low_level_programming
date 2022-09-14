#include "main.h"
/**
 * times_table - function that prints the 9 times table
 *
 * Return: Nothing
 */
void times_table(void)
{
	int a = 0;

	for (; a <= 9; a++)
	{
		int b = 0;

		while (b <= 9)
		{
			int c = a * b;

			if (c > 9)
			{
				_putchar(c / 10 + 48);
				_putchar(c % 10 + 48);
			}
			else if (b != 0)
			{
				_putchar(' ');
				_putchar(a * b + 48);
			}
			else
				_putchar(a * b + 48);
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}
		_putchar('\n');
	}
}
