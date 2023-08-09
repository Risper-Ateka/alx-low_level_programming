#include <stdlib.h>
#include "main.h"
/**
 *argstostr - entry point
 *@ac: input
 *@av: double ponter array
 *Return: pointer to the new string
 */
char *argstostr(int ac, char **av)
{
	int i, n, r = 0;
	int l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * (l + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	return (str);
}
