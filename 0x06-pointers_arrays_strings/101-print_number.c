#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: input integer
 * Return: void
 */
void print_number(int n)
{
	unsigned int a, b, tmp;

	if (n < 0)
	{
		_putchar(45);
		b = n * -1;
	}
	else
	{
		a = n;
	}
	b = a;
	tmp = -1;

	while (b > 9)
	{
		b /= 10;
		tmp *= 10;
	}
	for (; tmp >= 1; tmp /= 10)
	{
		_putchar(((a / tmp) % 10) + 48);
	}
}
