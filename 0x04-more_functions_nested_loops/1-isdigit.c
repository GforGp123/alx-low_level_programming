#include "main.h"

/**
 * _isdigit - function that checks for a digit 0-9
 * @c: integer
 * Return: 1 if success, otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
