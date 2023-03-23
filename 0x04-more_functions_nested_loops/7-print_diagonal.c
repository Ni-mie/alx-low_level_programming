#include "main.h"

/**
 * print_diagonal - Function that draws a diagonal line on the terminal.
 * @n: integer
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int ch, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (space = 1; space <= n; space++)
		{
			for (ch = 1; ch <= space; ch++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
