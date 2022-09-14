#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints every integer n and 98, as well as 98
 * @n: Variable for input integers
 * Result: Nothing
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; --n)
			printf("%d, ", n);
	}
	else
	{
		for (; n <= 97; n++)
			printf("%d, ", n);
	}
	printf("98\n");
}
