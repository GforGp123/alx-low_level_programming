#include "main.h"

/**
 * print_square - function that prints a square
 * @size: size of square
 * Return: Nothing
 */

void print_square(int size)
{
	int c, d;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < size; d++)
		{
			for (d = c; d < size; d++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
