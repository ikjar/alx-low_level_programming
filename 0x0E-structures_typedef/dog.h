#ifndef DOG_H
#define DOG_H

/**
 * struct dog - data type for a dog characteristics.
 * @name : character describe dog's name.
 * @age: Integer describe dog's age.
 * @owner: character describe dog's owner.
 * Description: the dogs are the best friends.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif
