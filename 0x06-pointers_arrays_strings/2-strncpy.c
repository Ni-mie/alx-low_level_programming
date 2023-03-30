#include "main.h"
#include <string.h>
/**
 * _strncpy - Function that copies a string.
 * @dest: String 1
 * @src: String 2
 * @n: integer
 * Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
