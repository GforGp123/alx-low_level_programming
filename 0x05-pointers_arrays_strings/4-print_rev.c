#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 * @s: string to be printed
 * Return: nothing
 */
void print_rev(char *s)
{
	int j, k, len;

	j = 0;
	while (s[j] != '\0')
	{
		j++;
	}
	len = j;
	for (k = len - 1; k >= 0; k--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
}
