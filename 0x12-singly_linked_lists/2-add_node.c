#include "lists.h"

/**
 * add_node - adds a new node at beginning of a list_t list
 * @head: a pointer to pointer type list_t
 * @str: a pointer to constant charac
 * Return: the address of new element, or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_n;
if (str == NULL)
{
return (NULL);
}
new_n = malloc(sizeof(list_t));
if (new_n == NULL)
{
return (NULL);
}
new_n->str = strdup(str);
if (new_n->str == NULL)
{
free(new_n);
return (NULL);
}
new_n->len = strlen(str);
new_n->next = *head;
*head = new_n;
return (new_n);
}
