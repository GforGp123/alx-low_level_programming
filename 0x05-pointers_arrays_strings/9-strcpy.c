#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src including
 * the terminating null byte to the buffer pointed to by dest
 * @dest: pointer to buffer from where we copy string
 * @src: string to be copied
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int len, a;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	for (a = 0; a < len; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}
