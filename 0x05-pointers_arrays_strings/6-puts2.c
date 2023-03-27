#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int len = 0;
	int t = 0;
	char *z = str;
	int n;

	while (*z != '\0')
	{
		z++;
		len++;
	}
	t = len - 1;
	for (n = 0 ; n <= t ; n++)
	{
	if (n % 2 == 0)
	{
		_putchar(str[n]);
	}
	}
	_putchar('\n');
}
