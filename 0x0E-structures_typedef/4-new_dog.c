#include "dog.h"
#include <stdlib.h>
/**
  *_strlen - returns string length
  *@s: string
  *
  *Return: the length of the string
  */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
  *_strcpy - copies the string pointed to be src
  *to the area pointed to by dest
  *including the null terminator
  *@dest: pointer to where string will be copied to
  *@src: pointer to where string will be copied from
  *Return: dest
  */
char *_strcpy(char *dest, char *src)
{
	int i;
	int len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
  *new_dog - creates a new dog
  *@name: name of new dog
  *@age: age of new dog
  *@owner: owner of new dog
  *Return: pointer to new dog
  *NULL if it fails
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int x, y;

	x = _strlen(name);
	y = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (x + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (y + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
