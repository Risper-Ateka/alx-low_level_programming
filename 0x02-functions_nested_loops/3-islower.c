#include "main.h"
/**
  *_islower - shows 1 if the input is a
  *lowercase character. Another case, shows
  *0
  *
  *@c: character in ASCII table
  *
  *Return: 1 for lower case. 0 for the rest
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
