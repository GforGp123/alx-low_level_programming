#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a num.
 * @l: integer
 * Return: value of l
 */
int print_last_digit(int l)
{
	int a = abs(l % 10) + 48;

	_putchar(a);
	return (a - 48);
}
