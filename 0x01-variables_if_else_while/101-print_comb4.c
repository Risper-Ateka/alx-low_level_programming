#include <stdio.h>
/**
  *main - Entry point
  *Description: prints all possible different combinations of three digits
  *Return: always 0
  */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 14; a <57; a++)
	{
		for (b = a +1; b < 57; b++)
		{
			for (c = b + 1; c <= 57; c++)
			{
				if ((a != b) != c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a == 55 && b == 56 && c == 57)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
