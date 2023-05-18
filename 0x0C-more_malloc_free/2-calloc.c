#include "main.h"
#include <stdlib.h>
/**
  *_memset - fills memory with a character
  *@t: memory to be filled
  *@c: char to copy
  *@m: number of times to copy the char
  *Return: pointer to memory t
  */
char *_memset(char *t, char c, unsigned int m)
{
	unsigned int i;

	for (i = 0; i < m; i++)
	{
		t[i] = c;
	}
	return (t);
}
/**
  *_calloc - allocates memory for an array
  *@nmemb: number of elements in array
  *@size: size of each element in array
  *Return: pointer to allocated memory
  *or NULL if it fails
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char*ptr;
	
	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
