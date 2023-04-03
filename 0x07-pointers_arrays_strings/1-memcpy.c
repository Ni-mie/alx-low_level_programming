#include "main.h"
#include <string.h>
/**
 * _memcpy - Function that conpies memory rea.
 * @dest: String 1
 * @src: String 2
 * @n: integer
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
