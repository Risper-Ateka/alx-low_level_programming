#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *argstostr - concatenates all arguments to the program
  *@ac: input
  *@av: double pointer
  *
  *Return: a pointer to a new string, or NULL if it fails
  */
char *argstostr(int ac, char **av)
{
	int i, n;
	int t = 0;
	int count = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			count++;
	}
	count += ac;

	p = malloc(sizeof(char) * (count + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			p[t] = av[i][n];
			t++;
		}
		if (p[t] == '\0')
		{
			p[t++] = '\n';
		}
	}
	return (p);
}
