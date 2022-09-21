#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entry point to program that generates random valid
 * passwords for the program 101-crackme
 * Return: 0
 */
int main(void)
{
	int pw[100];
	int x, sum, n;

	sum = 0;
	srand(time(NULL));
	for (x = 0; x < 100; x++)
	{
		pw[x] = rand() % 78;
		sum += (pw[x] + 48);
		putchar(pw[x] + 48);
		if ((2772 - sum) - 48 < 78)
		{
			n = 2772 - sum - 48;
			sum += n;
			putchar(n + 48);
			break;
		}
	}
	return (0);
}
