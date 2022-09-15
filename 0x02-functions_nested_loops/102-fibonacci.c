#include <stdio.h>
/**
 * main - entry point printing first 50 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	long int a, b, c, result;

	b = 1;
	c = 2;

	for (a = 1; a <= 50; ++a)
	{
		if (b != 20365011074)
		{
			printf("%ld, ", b);
		}
		else
		{
			printf("%ld\n", b);
		}
		result = b + c;
		b = c;
		c = result;
	}
	return (0);
}
