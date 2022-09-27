#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two
 * diagonals of a square matrix of an integer
 * @a: a pointer
 * @size: size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int x, y, z;
	int p = 0;
	int q = 0;

	for (x = 0; x < size; x++)
	{
		z = (x * size) + x;
		p += a[z];
	}
	for (y = 0; y < size; y++)
	{
		z = (y * size) + (size - 1 - y);
		q += a[z];
	}
	printf("%d, %d\n", p, q);
}
