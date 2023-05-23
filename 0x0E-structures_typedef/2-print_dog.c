#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *print_dog - prints details about dog
  *@d: pointer to struct to print
  *
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name:(nil)\nAge:%f\nOwner:%s\n", d->age, d->owner);
	if (d->owner == NULL)
		printf("Name:%s\nAge:%f\nOwner:(nil)\n", d->name, d->age);
	printf("Name:%s\nAge:%f\nOwner:%s\n", d->name, d->age, d->owner);
}
