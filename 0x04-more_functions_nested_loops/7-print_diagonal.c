#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line
 * @n: number of times the character \ is printed
 * Return: Nothing
 */

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; ++i)
		{
			_putchar(92);
		}
		_putchar('\n');
	}
}
