#include "main.h"
#include <string.h>
/**
 * _strchr - Function that locates a character in a string.
 * @s: Input
 * @c: Input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	char *ptr;

	ptr = strchr(s, c);

	if (ptr != NULL)
	{
		return (ptr);
	}
	else
		return (NULL);
}
