#include "main.h"

/**
 * cap_string - functon that capitalizes all words of string
 * @s: input string
 * Return: result
 */
char *cap_string(char *s)
{
	int cap = 0, n;
	int sepw[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (s[cap] >= 97 && s[cap] <= 122)
		s[cap] = s[cap] - 32;
	cap++;
	while (s[cap] != '\0')
	{
		for (n = 0; n < 13; n++)
		{
			if (s[cap] == sepw[1])
			{
				if ((*(s + (cap + 1)) >= 97) && (*(s + (cap + 1)) <= 122))
					*(s + (cap + 1)) = *(s + (cap + 1)) - 32;
				break;
			}
		}
		cap++;
	}
	return (s);
}
