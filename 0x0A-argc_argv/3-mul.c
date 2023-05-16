#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
  *main - entry point
  *@argc: argument count
  *@argv: argument vector
  *Return: 0 (success), 1 (error)
  */
int main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else if (argc != 3)
	{
		printf("error\n");
		return (1);
	}
	return (0);
}
