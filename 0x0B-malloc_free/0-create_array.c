#include "main.h"
#include <stdlib.h>
/**
 * create_array - Function that creates an array of char..
 * @c: Input
 * @size: Size
 * Return: Always 0 (Success)
 */
char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *ptr;

	ptr = (char *) malloc(size * sizeof(char));
	if (size == 0)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
	{
		ptr[j] = c;
	}
	return (ptr);
}
