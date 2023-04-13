#include "main.h"
/**
 * string_nconcat - Function that concatenates two strings.
 * @s1: String 1
 * @s2: String 2
 * @n: bytes
 * Return: Always 0 (Success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, n1;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n1 = len1 + len2;
	else
		n1 = len1 + n;

	concat = (char *) malloc(sizeof(char) * (n1 + 1));

	if (concat == NULL)
		return (NULL);

	strncpy(concat, s1, len1);
	if (n < len2)
		strncat(concat, s2, n);
	else
		strncat(concat, s2, len2);

	concat[n1] = '\0';

	return (concat);
}
