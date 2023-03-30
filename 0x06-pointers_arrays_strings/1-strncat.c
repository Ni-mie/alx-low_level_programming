#include "main.h"
#include <string.h>
/**
 * _strncat - Function that concatenates two strings.
 * @dest: String 1
 * @src: String 2
 * @n: integer
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
