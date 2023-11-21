#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node
 *				at a given position in a listint_t linked list
 * @head: Pointer to the pointer of the head node
 * @idx: Index where the new node
 *		should be inserted (starting from 0)
 * @n: Data (n) to be stored in the new node
 * Return: Address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int cnt = 0;
listint_t *curr = *head;
listint_t *nnode;
if (head == NULL)
{
return (NULL);
}
if (idx == 0)
{
nnode = malloc(sizeof(listint_t));
if (nnode == NULL)
{
return (NULL);
}
nnode->n = n;
nnode->next = *head;
*head = nnode;
return (nnode);
}
while (curr != NULL && cnt < (idx - 1))
{
curr = curr->next;
cnt++;
}
if (curr != NULL)
{
nnode = malloc(sizeof(listint_t));
if (nnode == NULL)
{
return (NULL);
}
nnode->n = n;
nnode->next = curr->next;
curr->next = nnode;
return (nnode);
}
return (NULL);
}
