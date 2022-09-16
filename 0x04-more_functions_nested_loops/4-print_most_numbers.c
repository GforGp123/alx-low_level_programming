#include "main.h"

/**
 * print_most_numbers - function that prints most numbers
 *
 * Return: nothing
 */

void print_most_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		if (n != 50 && n != 52)
			_putchar(n + 48);
	}
	_putchar('\n');
}
