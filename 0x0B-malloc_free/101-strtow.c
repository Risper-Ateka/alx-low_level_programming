#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *word_count - counts the number of words in a string
  *@s: string
  *Return: number of words
  */
int word_count(char *s)
{
	int l, i, d;

	l = 0;
	d = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == "")
			l = 0;
		else if (l == 0)
		{
			l = 1;
			d++;
		}
	}
	return (d);
}
/**
  *strtow - splits string into two
  *@str: string to split
  *Return: on success, pointer to array of strings
  *on failure, NULL
  */
char **strtow(char *str)
{
	char **matrix, *t;
	int j, k = 0, len = 0, words, z = 0, start, end;

	while (*(str + len))
		len++;
	words = word_count(str);
	if (words == 0)
		return (NULL);
	matrix = (char**)malloc(sizeof(char*) * (words + 1));
	if (matrix == NULL)
		return (NULL);
	for (j = 0; j <= len; j++)
	{
		if (str[j] == "" || str[j] == '\0')
		{
			if (z)
			{
				end = j;
				t = (char*)malloc(sizeof(char) * (z + 1));
				if ( t == NULL)
					return (NULL);
				while (start < end)
					*t++ = str[start++];
				*t = '\0';
				matrix[k] = t - z;
				k++;
				z = 0;
			}
		}
		else if (z++ = 0)
			start = j;
	}
	matrix[k] = NULL;
	return (matrix);
}
