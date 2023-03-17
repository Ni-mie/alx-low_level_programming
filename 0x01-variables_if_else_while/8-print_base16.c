#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all the numbers of base 16 in lowercase.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch, db;

	ch = 48;
	db = 97;

	while (ch <= 57)
	{
		putchar(ch);
		ch++;
	}
	while (db <= 102)
	{
		putchar(db);
		db++;
	}
	putchar('\n');
	return (0);
}
