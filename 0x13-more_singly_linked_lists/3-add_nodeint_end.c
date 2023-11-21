#include "lists.h"

/**
 * add_nodeint_end - adds new node to end of a list_t list
 * @head: pointer to a pointer of type list_t
 * @n: a constant integer
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *nnode = malloc(sizeof(listint_t));
if (nnode == NULL)
{
return (NULL);
}
nnode->n = n;
nnode->next = NULL;
if (*head == NULL)
{
*head = nnode;
}
else
{
listint_t *current = *head;
while (current->next != NULL)
{
current = current->next;
}
current->next = nnode;
}
return (nnode);
}
