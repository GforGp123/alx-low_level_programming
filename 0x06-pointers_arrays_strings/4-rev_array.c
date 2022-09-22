#include "main.h"

/**
 * reverse_array - function that reverses the content of an array
 * @a: the array
 * @n: number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int c, b, tmp;

	for (c = 0; c < n - 1; c++)
	{
		for (b = c + 1; b > 0; b--)
		{
			tmp = *(a + b);
			*(a + b) = *(a + (b - 1));
			*(a + (b - 1)) = tmp;
		}
	}
}
