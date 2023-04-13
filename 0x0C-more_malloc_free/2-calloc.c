#include "main.h"
#include <string.h>
/**
 * _calloc - Function that allocates memory for an array, using malloc.
 * @nmemb: Array
 * @size: Size
 * Return: Always 0 (Success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, nmemb * size);

	return (ptr);
}
