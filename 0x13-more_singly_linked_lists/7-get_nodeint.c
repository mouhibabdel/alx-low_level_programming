#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node
 *			of a listint_t linked list
 * @head: Pointer to the head node of the linked list
 * @index: Index of the node to retrieve (starting from 0)
 * Return: Pointer to the nth node,
 * or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int cnt = 0;
listint_t *curr = head;
while (curr != NULL)
{
if (cnt == index)
{
return (curr);
}
cnt++;
curr = curr->next;
}
return (NULL);
}
