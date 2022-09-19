#include "main.h"

/**
 * _strlen - functions that returns the length of a string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int c;

	c = 0;
	while (s[c] != '\0')
	{
		++c;
	}
	return (c);
}
