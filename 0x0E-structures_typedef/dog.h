#ifndef MY_STRUCTURE_H
#define MY_STRUCTURE_H

/**
  *struct dog - a struct containing the details about a dog
  *@name: dog's name
  *@age: dog's age
  *@owner: dog's owner
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
