#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	unsigned long int sum3, sum5, sum;
	int s;

	sum3 = 0;
	sum5 = 0;
	sum = 0;

	for (s = 0; s < 1024; s++)
	{
		if ((s % 3) == 0)
		{
			sum3 = sum3 + s;
		}
		else if ((s % 5) == 0)
		{

			sum5 = sum5 + s;
		}
	}
	sum = sum3 + sum5;
	printf("%lu\n", sum);
	return (0);
}
