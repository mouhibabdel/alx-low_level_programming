#include "lists.h"

/**
 * add_node_end - adds new node to end of list_t list
 * @head: a pointer to point of type list_t
 * @str: a pointer to a constant charac
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_n = malloc(sizeof(list_t));//new_node
if (str == NULL)
{
return (NULL);
}
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
new_n->next = NULL;
if (*head == NULL)
{
*head = new_n;
}
else
{
list_t *current = *head;
while (current->next != NULL)
{
current = current->next;
}
current->next = new_n;
}
return (new_n);
}
