#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: pointer
 * @accept: also pointer
 * Return: number of bytes in initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int len = 0;
	int a = 0;
	int b = 0;

	while (s[a] != '\0')
	{
		while (accept[b] != '\0')
		{
			if (accept[b] == s[a])
				len++;
			b++;
		}
		b = 0;
		a++;
		if (s[a] == ' ')
		{
			break;
		}
	}
	return (len);
}
