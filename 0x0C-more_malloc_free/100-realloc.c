#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Function that reallocates a memory block using malloc and free.
 * @ptr: Pointer
 * @old_size: Old size
 * @new_size: New size
 *
 * Return: Always 0 (Success)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr1 = NULL;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ptr1 = malloc(new_size);
		if (ptr1 == NULL)
			return (NULL);
	}
	else
	{
		ptr1 = malloc(new_size);
		if (ptr1 == NULL)
			return (NULL);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size < old_size)
		memcpy(ptr1, ptr, new_size);
	else
		memcpy(ptr1, ptr, old_size);

	free(ptr);
	return (ptr1);
}
