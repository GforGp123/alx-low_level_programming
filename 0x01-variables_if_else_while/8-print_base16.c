#include <stdio.h>
/**
 * main - Start point
 * Return: 0 (Success)
 */
int main(void)
{
	int c;
	char d;

	for (c = 0; c < 10; c++)
	putchar(c % 10 + '0');

	for (d = 'a'; d < 'g'; d++)
	putchar(d);
	putchar('\n');
	return (0);
}
