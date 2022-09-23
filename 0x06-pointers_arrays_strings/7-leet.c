#include "main.h"

/**
 * leet - functions that encode a string into 1337
 * @s: string
 * Return: result
 */
char *leet(char *s)
{
	int tmp = 0, n;
	int upp[] = {65, 69, 79, 84, 76};
	int low[] = {97, 101, 111, 116, 108};
	int num[] = {52, 51, 48, 55, 49};

	while (s[tmp] != '\0')
	{
		for (n = 0; n < 5; n++)
		{
			if (s[tmp] == low[n] || s[tmp] == upp[n])
			{
				s[tmp] = num[n];
				break;
			}
		}
		tmp++;
	}
	return (s);
}
