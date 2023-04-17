#ifndef _DOG_
#define _DOG_

#define struct dog dog_t;

/**
 * struct dog - dog info
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the owner of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
