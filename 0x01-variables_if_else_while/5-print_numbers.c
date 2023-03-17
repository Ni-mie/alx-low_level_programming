#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all single digit numbers of base 10 starting from 0.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	digit = 0;

	while (digit <= 9)
	{
		printf("%d\n", digit);
		digit++;
	}
	return (0);
}
