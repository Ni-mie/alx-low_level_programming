#include "main.h"

/**
 * _abs - Function that computes the absolute value of an integer.
 * @r: starting integer
 * Return: Always 0 (Success)
 */
int _abs(int r)
{
	if (r < 0)
	{
		r = -r;
	}
	return (r);
}
