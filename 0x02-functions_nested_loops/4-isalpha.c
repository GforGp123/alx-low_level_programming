#include <stdio.h>
#include "main.h"
/**
 * _isalpha - returns the 1 value when true
 * @c: shows value assigned
 * Return: value of c
 */
int _isalpha(int c)
{
	if (c > 96 && c < 123 || c > 64 && c < 91)
		return (1);
	else
		return (0);
}
