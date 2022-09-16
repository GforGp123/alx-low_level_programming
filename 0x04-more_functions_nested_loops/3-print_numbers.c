#include "main.h"

/**
 * print_numbers - function that prints numbers from 0-9
 * @a:
 * Return: nothing
 */

void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
		_putchar(a + 48);
	_putchar('\n');
}
