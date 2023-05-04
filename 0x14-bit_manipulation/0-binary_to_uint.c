#include "main.h"

/**
 * binary_to_uint -Function that converts a binary number to an unsigned int.
 * @b: binary string
 * Return: Converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int i = 1;
	int len;

	if (b == NULL)
		return (0);

	len = 0;
	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}

	while (len > 0)
	{
		len--;
		if (b[len] == '1')
			result += i;
		i *= 2;
	}

	return (result);
}
