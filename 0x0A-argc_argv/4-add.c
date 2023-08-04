#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - entry point
 *@argc: argument count
 *@argv: argument vector
 *Return: 0 (success), 1 (error)
 *
 */
int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	if (argc == 1)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j])
		{
			if (!isdigit(argv[i][j]))
			{	
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
