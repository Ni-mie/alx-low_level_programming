#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	float grand_sum = 2;
	unsigned long a = 1, b = 2, sum;

	while (1)
	{
		sum = a + b;

		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			grand_sum += sum;

		a = b;
		b = sum;
	}
	printf("%.0f\n", grand_sum);

	return (0);
}
