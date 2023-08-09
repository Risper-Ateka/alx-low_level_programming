#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 *_strdup - duplicate to new memory space allocated
 *@str: pointer to string
 *Return: pointer to duplicated string
 *NULL if str is NULL or if memory is insufficient
 */
char *_strdup(char *str)
{
	char *dup;
	int i;
	int j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	dup = malloc(sizeof(char) * (i + 1));

	if (dup == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		dup[j] = str[j];
	return (dup);
}

