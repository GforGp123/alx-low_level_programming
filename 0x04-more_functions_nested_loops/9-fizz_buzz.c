#include <stdio.h>

/**
 *main - entry point to fizzbuzz
 * Return: 0
 */

int main(void)
{
	int c;

	for (c = 1; a <= 100; c++)
	{
		printf("%d ", c);
	}
	if (c % 3 == 0)
	{
		printf("Fizz", c);
	}
	else if (c % 5 == 0)
	{
		printf("Buzz", c);
	}
	else if (c % 3 && c % 5)
	{
		printf("FizzBuzz", c);
	}
	printf("\n");
}
