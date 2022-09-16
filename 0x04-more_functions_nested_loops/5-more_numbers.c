#include "main.h"

/**
 * more_numbers - functio n that prints 10 times the numbers 0-14
 * Return: void
 */

void more_numbers(void)
{
	int a;
	int b;

	for (a = 1; a <= 9; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (j > 9)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
		j = 0;
	}
}
