#include "main.h"

/**
 * argstostr - Function that concatenates all the arguments of your program.
 * @ac: Integer
 * @av: Char
 * Return: Always 0 (Success)
 */
char *argstostr(int ac, char **av)
{
	int j, i = 0, total = 0;
	char *concat;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
		int len = 0;

		while (av[j][len])
			len++;
		total += len + 1;
	}

	concat = (char *) malloc(sizeof(char) * total + 1);

	if (concat == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
		int len = 0;

		while (av[j][len])
		{
			concat[i] = av[j][len];
			len++;
			i++;
		}
		concat[i] = '\n';
		i++;
	}

	concat[i] = '\0';
	return (concat);
}
