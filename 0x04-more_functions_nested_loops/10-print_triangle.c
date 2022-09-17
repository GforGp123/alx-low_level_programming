#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: size of triangle
 * Return: Nothing
 */

void print_triangle(int size)
{
	int a;
	int b;
	int c;

	if (size <= 0)
		_putchar('\n');
	for (a = 0; a < size; a++)
	{
		for (b = size - a; b > 1; b--)
			_putchar(' ');
		for (c = a + b; c >= 1; c--)
			_putchar('#');
		_putchar('\n');
	}
}
