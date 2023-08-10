#include "main.h"
#include <stdlib.h>
/**
 *string_nconcat - concatenates the first n bytes of s2 into s1
 *@s1: string to append
 *@s2: string to concatenate
 *@n: bytes of s2 to concatenate
 *Return: pointer to resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0, j = 0, length1 = 0, length2 = 0;

	while (s1 && s1[length1])
		length1++;
	while (s2 && s2[length2])
		length2++;
	if (n < length2)
		str = malloc(sizeof(char) * (length1 + n + 1));
	else
		str = malloc(sizeof(char) * (length1 + length2 + 1));
	if (!str)
		return (NULL);
	while (i < length1)
	{
		str[i] = s1[i];
		i++;
	}
	while (n < length2 && i < (length1 + n))
		str[i++] = s2[j++];
	while (n >= length2 && i < (length1 + length2))
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
}
