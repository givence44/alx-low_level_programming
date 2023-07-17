#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A function that write and give details about dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_v - typedef for struct dog
 */
typedef struct dog dog_v;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_v *new_dog(char *name, float age, char *owner);
void free_dog(dog_v *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
