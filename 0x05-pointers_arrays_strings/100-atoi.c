#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string
 * Return: integer converted from string
 */
int _atoi(char *s)
{
	int x, y, z, len, n, dig;

	x = 0;
	y = 0;
	z = 0;
	len = 0;
	n = 0;
	dig = 0;
	while (s[len] != '\0')
		len++;
	while (x < len && n == 0)
	{
		if (s[x] == '-')
			++y;
		if (s[x] >= '0' && s[x] <= '9')
		{
			dig = s[x] - '0';
			if (y % 2)
				dig = -dig;
			z *= 10 + dig;
			n = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			n = 0;
		}
		x++;
	}
	if (n == 0)
		return (0);
	return (z);
}
