#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list_t list
 * @head: pointer to a pointer of type list_t
 * @n: constant int
 * Return:address the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *n_node;
n_node = malloc(sizeof(listint_t));
if (n_node == NULL)
{
return (NULL);
}
n_node->n = n;
n_node->next = *head;
*head = n_node;
return (n_node);
}
