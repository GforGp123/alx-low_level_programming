#include "main.h"
/**
 * print_alphabet_x10 - print alphabets x10
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int d = 0;

	for (; d < 10; d++)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		c = 'a';
		putchar('\n');
	}
}
