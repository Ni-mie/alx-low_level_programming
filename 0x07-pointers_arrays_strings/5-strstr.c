#include "main.h"
#include <string.h>
/**
 * _strstr - Function that locates a substring.
 * @haystack: String
 * @needle: Sub-string
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	char *ptr;

	ptr = strstr(haystack, needle);

	if (ptr != NULL)
	{
		return (ptr);
	}
	else
		return (NULL);
}
