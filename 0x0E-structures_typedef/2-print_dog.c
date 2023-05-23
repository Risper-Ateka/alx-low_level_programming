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
		d->"(nil)";
	if (d->owner == NULL)
		d->"(nil)";
	printf("Name:%s\nAge:%f\nOwner:%s\n", d->name, d->age, d->owner)
}
