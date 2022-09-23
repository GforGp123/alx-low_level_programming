#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 * @s: string
 * Return: result
 */
char *rot13(char *s)
{
	int tmp = 0, n;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[tmp] != '\0')
	{
		for (n = 0; n < 52; n++)
		{
			if (s[tmp] == alphabet[n])
			{
				s[tmp] = rot13[n];
				break;
			}
		}
		tmp++;
	}
	return (s);
}
