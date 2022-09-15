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

	for (n = 1; n <= 33; ++n)
	{
		if (d < 4000000 && (d % 2) == 0)
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
