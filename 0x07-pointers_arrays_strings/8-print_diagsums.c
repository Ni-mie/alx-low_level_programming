#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Function that prints the sum of the two diagonals of
 * a square matrix of integers.
 * @a: Input
 * @size: Size
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int i, j, s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 = s1 + a[i * size + i];
	}
	for (j = size - 1; j >= 0; j--)
	{
		s2 = s2 +  a[j * size + (size - j - 1)];
	}
	printf("%d, %d\n", s1, s2);
}
