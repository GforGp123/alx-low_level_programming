#include "main.h"

/**
 * print_line - function that draws a straight line
 * @n: number of times the character _ should  be printed
 * Return: Nothing
 */

void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
		_putchar('_');
	_putchar('\n');
}
