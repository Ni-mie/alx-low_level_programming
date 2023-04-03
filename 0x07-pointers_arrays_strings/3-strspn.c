#include "main.h"
#include <string.h>
/**
 * _strspn - Function that gets the length of a prefix substring.
 * @s: Input
 * @accept: Input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
