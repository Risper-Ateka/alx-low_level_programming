#include "main.h"
#include <stdlib.h>
/**
  *array_range - creates an array of integers
  *@min: lowest value in array
  *@max: largest value in array
  *Return: pointer to the array
  *or NULL if it fails
  */
int *array_range(int min, int max)
{
	int i;
	int size;
	int *array;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		array[i] = min++;
	return (array);
}
