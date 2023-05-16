#include "main.h"
#include <stdlib.h>
/**
  *create_array - creates an array of characters
  *@size: sze of array
  *@c: char to initialize to
  *Return: pointer to array, NULL if fails
  */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	ar = malloc(sizeof(char) * size);
	if (size == 0 || ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ar[i] = c;
	return (ar);
}
