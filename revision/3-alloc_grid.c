#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int **alloc_grid(int width, int height)
{
	int a;
	int b;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = (int **)malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		ptr[a] = (int *)malloc(sizeof(int) * width);
