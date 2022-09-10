#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * Return: 0 Always (Success)
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (last > 5)
	{
		printf("Last digit of %d", n);
		printf(" is %d and is greater than 5\n", last);
	}

	else if (last < 5 && last != 0)
	{
		printf("Last digit of %d", n);
		printf(" is %d and is less than 6 and not 0\n", last);
	}

	else if (last == 0)
	{
		printf("Last digit of %d", n);
		printf(" is %d and is 0\n", last);
	}
	return (0);
}
