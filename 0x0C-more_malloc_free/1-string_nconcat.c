#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *string_nconcat - concatenates two strings
  *@s1: first string
  *@s2: second string
  *@n: length of s2 concatenated into s1
  *
  *Return: pointer to newly allocated space in memory
  *or NULL if it fails
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1 = 0;
	unsigned int l2 = 0;
	unsigned int a = 0;
	unsigned int b = 0;
	char *str;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;
	if (n < l2)
		str = malloc(sizeof(char) * (l1 + n + 1));
	else
		str = malloc(sizeof(char) * (l2 + l2 + 1));
	if (!str)
		return (NULL);
	while (a < l1)
	{
		str[a] = s1[a];
		a++;
	}
	while (n < l2 && a < (l1 + n))
		str[a++] = s2[b++];
	while (n >= l2 && a < (l1 + l2))
		str[a++] = s2[b++];
	str[a] = '\0';
	return (str);
}
