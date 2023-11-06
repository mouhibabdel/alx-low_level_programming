#include "dog.h"
#include <stdlib.h>

/**
 * _strcopy - Copy a string from src to dst.
 * @dst: Destination string.
 * @src: Source string.
 */
void _strcopy(char *dst, const char *src)
{
while (*src)
{
*dst = *src;
dst++;
src++;
}
*dst = '\0';
}

/**
 * new_dog - Create a new dog with the given attributes.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: Pointer to the newly created dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog_ptr;
int name_len, owner_len;
for (name_len = 0; name[name_len]; name_len++)
;
for (owner_len = 0; owner[owner_len]; owner_len++)
;
new_dog_ptr = malloc(sizeof(dog_t);
if (new_dog_ptr == NULL)
{
return (NULL);
}
new_dog_ptr->name = malloc(name_len + 1);
new_dog_ptr->owner = malloc(owner_len + 1);
if (new_dog_ptr->name == NULL || new_dog_ptr->owner == NULL)
{
free(new_dog_ptr->name);
free(new_dog_ptr->owner);
free(new_dog_ptr);
return (NULL);
}
_strcopy(new_dog_ptr->name, name);
_strcopy(new_dog_ptr->owner, owner);
new_dog_ptr->age = age;
return (new_dog_ptr);
}
