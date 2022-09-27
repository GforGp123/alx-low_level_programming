#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: the string
 * @c: character
 * Return: a pointer to first occurence of a character c else NULL
 */
char *_strchr(char *s, char c)
{
	unsigned int a = 0;

	for (; s[a] != '\0'; a++)
		if (s[a] == c)
			return (s + a);
	if (s[a] == c)
		return (s + a);
	return ('\0');
}
