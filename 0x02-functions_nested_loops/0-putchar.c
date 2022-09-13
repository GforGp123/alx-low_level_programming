#include <unistd.h>
/**
 * _putchar - write the character a in stdout
 * @a: character to print
 *
 * Return: 1 if successful
 *
 */

int _putchar(char a)
{
	return (write(1, &a, 1));
}
