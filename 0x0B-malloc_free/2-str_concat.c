#include "main.h"

/**
 * str_concat - Function that concatenates two strings.
 * @s2: String 1
 * @s1: String 2
 * Return: Always 0 (Success)
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	concat = (char *) malloc(len1 + len2 + 1);

	if (concat == NULL)
		return (NULL);

	strcpy(concat, s1);
	strcat(concat, s2);

	return (concat);
}
