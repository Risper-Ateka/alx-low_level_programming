#include "main.h"
/**
  *print_rev - prints a string in reverse
  *@s: string to print
  */
void print_rev(char *s)
{
	int len = 0;
	int c;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	s--;
	for (c = len; c > 0; c--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
