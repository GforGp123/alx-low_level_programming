#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string
 * @accept: a pointer like s
 * Return: a pointer to the byte in s amtching the on ein accpet else NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0;
	int b;

	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
			{
				return (s + a);
			}
			b++;
		}
		a++;
	}
	return ('\0');
}
