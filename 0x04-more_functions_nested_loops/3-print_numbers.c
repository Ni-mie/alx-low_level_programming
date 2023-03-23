#include "main.h"

/**
 * print_numbers - Function that prints the numbers, from 0-9.
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar (i);
	}
	_putchar ('\n');
}
