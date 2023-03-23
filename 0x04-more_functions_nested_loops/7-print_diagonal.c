#include "main.h"

/**
 * print_diagonal - Function that draws a diagonal line on the terminal.
 * @n: integer
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int ch, space;

	if (n > 0)
	{
		for (ch = 0; ch <= n; ch++)
		{
			for (space = 0; space <= ch; space++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
