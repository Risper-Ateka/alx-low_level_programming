#include <stdio.h>
/**
  *main - Entry point
  *Description: prints all possible different combinations of two digits
  *Return: always 0
  */
int main(void)
{
	int n;
	int m;

	for (n = 48; n < 57; n++)
	{
		for (m = n + 1; m <= 57; m++)
			if (n != m)
			{
				putchar(n);
				putchar(m);
				if (n == 56 && m == 57)
					continue;
				putchar(',');
				putchar(' ');
			}
	}
	putchar('\n');
	return (0);
}
