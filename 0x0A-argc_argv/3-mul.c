#include "main.h"

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, mult = 1;

	if (argc < 3)
	{
		printf("Error\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mult *= atoi(argv[i]);
		}
	printf("%d\n", mult);
	}
	return (0);
}
