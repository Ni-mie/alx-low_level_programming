#include "main.h"
#include <string.h>
/**
 * _strdup - Function that returns a  pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter..
 * @str: Input
 * Return: Always 0 (Success)
 */
char *_strdup(char *str)
{
	char *str2;

	if (str == NULL)
	{
		return (NULL);
	}

	str2 = (char *)  malloc(strlen(str) + 1);

	if (str2 == NULL)
	{
		return (NULL);
	}

	strcpy(str2, str);

	return (str2);
}
