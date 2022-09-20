#include "main.h"

/**
 * puts2 - function that prints a char starting from first one
 * @str: string from which to print the chars
 */
void puts2(char *str)
{
	int a, b;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	for (b = 0; b < a; b += 2)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
