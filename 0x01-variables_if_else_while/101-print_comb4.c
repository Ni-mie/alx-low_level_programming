#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all possible different combinations of three digits.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first_digit, second_digit, third_digit;

	first_digit = 0;

	while (first_digit <= 9)
	{
		second_digit = 0;
		while (second_digit <= 9)
		{

			third_digit = 0;
			while (third_digit <= 9)
			{

				if (first_digit != second_digit &&
					first_digit < second_digit &&
					second_digit != third_digit &&
					second_digit < third_digit)
			{
				putchar(first_digit + 48);
				putchar(second_digit + 48);
				putchar(third_digit + 48);
				if (first_digit + second_digit +
				    third_digit != 24)
				{
				putchar(',');
				putchar(' ');
				}
			}
			third_digit++;
			}
			second_digit++;
		}
		first_digit++;
	}
	putchar('\n');
	return (0);
}
