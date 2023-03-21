#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long a = 1, b = 2, sum;

	printf("%lu, %lu", a, b);

	for (i = 3; i <= 98; i++)
	{
		sum = a + b;
		printf(",");
		printf(" ");
		printf("%lu", sum);
		a = b;
		b = sum;
	}
	printf("\n");
	return (0);
}
