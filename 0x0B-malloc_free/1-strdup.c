#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  *_strdup - pointer to a deplicated string in memory
  *@str: string to be duplicated
  *Return: 0 (success)
  */
char *_strdup(char *str)
{
	char *ar;
	int i;
	int t = 0;

	if (str == NULL)
		return (NULL);
	i = 0;

	while (str[i] != '\0')
		i++;
	ar = malloc(sizeof(char) * (i + 1));

	if (ar == NULL)
		return (NULL);
	for (t = 0; str[t]; t++)
		ar[t] = str[t];
	return (ar);
}
