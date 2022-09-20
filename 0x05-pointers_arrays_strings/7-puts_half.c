#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: the string
 * Return: void
 */
void puts_half(char *str)
{
	int len, n, c;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		for (c = len / 2; str[c] != '\0'; c++)
		{
			_putchar(str[c]);
		}
	} else if (len % 2)
	{
		for (n = (len - 1) / 2; n < len - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
