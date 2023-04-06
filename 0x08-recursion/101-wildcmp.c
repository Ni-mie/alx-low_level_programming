#include "main.h"

int cmp(char *s1, char *s2);
/**
 * wildcmp - Function that compares 2 string nd returns 1 if the strings can be
 * considered identical, otherwise return 0.
 * @s1: String 1
 * @s2: String 2
 * Return: Always 0 (Success)
 */
int wildcmp(char *s1, char *s2)
{
	return (cmp(s1, s2));
}

/**
 * cmp - Function that compares 2 string nd returns 1 if the strings can be
 * considered identical, otherwise return 0.
 * @s1: String 1
 * @s2: String 2
 * Return: Always 0 (Success)
 */
int cmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 == '*' && *s2 != '\0')
		{
			return (cmp(s1, s2 + 1));
		}
	return (*s2 == '\0');
	}
	if (*s2 == '*')
	{
		return (cmp(s1 + 1, s2) || cmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (cmp(s1 + 1, s2 + 1));
	}
	else
		return (0);
}
