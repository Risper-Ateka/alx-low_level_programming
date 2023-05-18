#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *malloc_checked - allocates memory using malloc
  *@b: input
  *Return: pointer to the allocated memory (success)
  *or 1 for failure
  */
void *malloc_checked(unsigned int b)
{
	void *bb = malloc(b);

	if (bb == NULL)
		exit(98);

	return (bb);
}
