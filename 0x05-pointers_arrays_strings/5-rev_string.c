#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	char tmp;
	int a, len0, len1;

	len0 = 0;
	len1 = 1;
	while (s[len0] != '\0')
	{
		len0++;
	}
	len1 = len0 - 1;
	for (a = 0; a < len0 / 2; a++)
	{
		tmp = s[a];
		s[a] = s[len1];
		s[len1--] = tmp;
	}
}
