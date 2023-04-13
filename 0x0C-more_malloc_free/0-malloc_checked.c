#include "main.h"

/**
 * malloc_checked - Function that allocates memory using malloc.
 * @b: number of bytes
 * Return: Always 0 (Success)
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
