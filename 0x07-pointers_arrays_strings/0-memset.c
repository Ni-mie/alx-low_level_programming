#include "main.h"
#include <string.h>
/**
 * _memset - Function that fills memory with a constant byte.
 * @s: String 1
 * @b: String 2
 * @n: integer
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
