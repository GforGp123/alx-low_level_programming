#include <stdio.h>
/**
 * main - entry block
 * Return: 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
	putchar(x % 9 + '1');
	if (x <= 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
