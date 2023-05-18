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
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;
	unsigned int a = 0;
	unsigned int b = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[s1_len] != '\0')
		s1_len++;
	while (s2[s2_len] != '\0')
		s2_len++;
	if (n < s2_len)
		str = malloc((s1_len + n + 1) * sizeof(char));
	else if (n >= s2_len)
		str = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (a = 0; a < s1_len; a++)
		str[a] = s1[a];
	for (b = 0; b < s2_len; b++)
		str[a + b] = s2[b];
	str[a + b] = '\0';
	return (str);
}
