#include <stdio.h>

/**
 * main - prints the largest prime factor of the number
 * Return: 0
 */

int main(void)
{
	long int a, prime;

	a = 612852475143;
	for (prime = 2; prime <= a; prime++)
	{
		if (a % prime == 0)
		{
			a /= prime;
			prime--;
		}
	}
	printf("%ld\n", prime);
	return (0);
}
