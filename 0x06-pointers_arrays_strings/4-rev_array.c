#include "main.h"
#include <string.h>
/**
 * reverse_array - Function that reverses the content of an array of integers.
 *
 * @a: Integer
 * @n: number of elements of the array
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
