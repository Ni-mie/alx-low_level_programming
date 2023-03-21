#include"main.h"

/**
 * print_times_table - prints time table of n
 *
 * @n: takes number input
*/

void print_times_table(int n)
{
	int prod, i, j;

	if (n <= 15 && n >= 0)
	{
		for (j = 0; j <= n; j++)
		{
			_putchar(48);
			for (i = 1; i <= n; i++)
			{
				_putchar(',');
				_putchar(' ');

				prod = j * i;

				if (prod <= 9)
					_putchar(' ');
				if (prod <= 99)
					_putchar(' ');

				if (prod >= 100)
				{
					_putchar((prod / 100) + 48);
					_putchar((prod / 10) % 10 + 48);
				} else if (prod <= 99 && prod >= 10)
					_putchar((prod / 10) + 48);
				_putchar((prod % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
