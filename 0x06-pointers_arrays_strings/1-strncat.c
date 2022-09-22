#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string to be appended to
 * @src: string to be appended
 * @n: amount of bytes used from src
 * Return: the pointer to the dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int str = 0, len = 0;

	while (dest[str] != '\0')
	{
		str++;
	}
	while (len < n)
	{
		dest[str] = src[len];
		if (src[len] == '\0')
			break;
		str++;
		len++;
	}
	return (dest);
}
