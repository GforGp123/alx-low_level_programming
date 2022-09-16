#include "main.h"

/**
 * print_line - function that draws a straight line
 * @n: number of times the character _ should  be printed
 * Return: Nothing
 */

void print_line(int n)
{
	if (n > 0)
		_putchar('_');
	else
		_putchar('\n');
}
