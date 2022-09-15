#include <stdio.h>
/**
 * main - entry point to print the sum of the even-valued terms
 * Return: 0
 */
int main(void)
{
	unsigned long int d, e, f, sum;
	int n;

	d = 1;
	e = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + d;
		}
		f = d + e;
		d = e;
		e = f;
	}
	printf("%lu\n", sum);
	return (0);
}
