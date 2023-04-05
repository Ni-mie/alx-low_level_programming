#include "main.h"
#include <string.h>

int palindrome(char *s, int s1, int s2);
/**
 * is_palindrome - Function that returns 1 if a string is a palindrome.
 * @s: string
 * Return: Always 0 (Success)
 */
int is_palindrome(char *s)
{
	return (palindrome(s, 0, strlen(s) - 1));
}

/**
 * palindrome - Function that returns 1 if a string is a palindrome.
 * @s: string
 * @s1: beginning
 * @s2: end
 * Return: Always 0 (Success)
 */
int palindrome(char *s, int s1, int s2)
{
	if (s1 >= s2)
		return (1);
	else if (s[s1] != s[s2])
		return (0);
	else
		return (palindrome(s, s1 + 1, s2 - 1));
}
