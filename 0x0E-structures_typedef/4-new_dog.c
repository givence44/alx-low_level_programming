#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Returns the length of a string
 * @s: string to examine
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * *_strcpy - Copy the string pointed to src
 * null byte (\0) to the buffer pointed to by dest
 * @dest: Pointer to where we copy the string
 * @src: String to copy
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int ent, i;

	ent = 0;

	while (src[ent] != '\0')
	{
		ent++;
	}

	for (i = 0; i < ent; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - Creates a new dog
 * @name: Name of the new dog
 * @age: Age of the new dog
 * @owner: Owner of the new dog
 * Return: Pointer to the new dog (Success), or NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int ent1, ent2;

	ent1 = _strlen(name);
	ent2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (ent1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (ent2 + 1));
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
