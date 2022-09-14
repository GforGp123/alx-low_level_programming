#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a num.
 * @l: integer
 * Return: value of l
 */
int print_last_digit(int l)
{
	int a = (l % 10);

	if (a < 0)
	{
		a *= -1;
	}
	_putchar(a + 48);
	return (a);
}
