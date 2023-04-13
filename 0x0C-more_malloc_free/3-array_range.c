#include "main.h"
#include <string.h>
/**
 * array_range - Function that creates an array of integers.
 * @min: Min
 * @max: Max
 * Return: Always 0 (Success)
 */
int *array_range(int min, int max)
{
	int *ptr;
	int n, i;

	if (min > max)
		return (NULL);

	n = max - min + 1;
	ptr = (int *) malloc(n * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
