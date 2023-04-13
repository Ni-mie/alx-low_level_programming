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
	unsigned int len1, len2;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len1 + len2;

	concat = (char *) malloc(sizeof(char) * (len1 + n + 1));

	if (concat == NULL)
		return (NULL);

	strncpy(concat, s1, len1);
	strncat(concat, s2, n);

	concat[len1 + n] = '\0';

	return (concat);
}
