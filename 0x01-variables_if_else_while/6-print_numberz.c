#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 Always
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(a % 10 + '0');
		a++;
	}
	putchar('\n');
	return (0);
}
