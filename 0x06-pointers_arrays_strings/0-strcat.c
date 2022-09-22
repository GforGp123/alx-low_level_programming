#include "main.h"

/**
 * *_strcat - function that concatenate two strings
 * overwriting the terminating null byte at the end of dest and then
 * adds a terminating null byte
 * @dest: string to be appended to
 * @src: string to be appended
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int str = 0, len = 0;

	while (dest[str] != '\0')
	{
		str++;
	}
	while (len >= 0)
	{
		dest[str] = src[len];
		if (src[len] == '\0')
			break;
		str++;
		len++;
	}
	return (dest);
}
