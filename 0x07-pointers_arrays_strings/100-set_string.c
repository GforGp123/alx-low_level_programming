#include "main.h"

/**
 * set_string - function that sets value of a pointer to a char
 * @s: a pointer to pointer
 * @to: a pointer
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
