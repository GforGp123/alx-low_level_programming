#include "main.h"
/**
 * print_sign - function that prints a sign
 * @n: prints result assigned
 * Return: returns values of n
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
