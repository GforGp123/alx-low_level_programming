#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: first string
 * @s2: second string
 * Return: result
 */
int _strcmp(char *s1, char *s2)
{
	int n = 0, res = 0;

	while (res == 0)
	{
		if ((s1[n] == '\0') && (s2[n] == '\0'))
			break;
		res = s1[n] - s2[n];
		n++;
	}
	return (res);
}
