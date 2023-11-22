#include "lists.h"

/**
 * reverse_help - recursively reverses a listint list
 * @first: node to reverse
 * @second: node after node to reverse
 * Return: void
 */
listint_t *reverse_help(listint_t *first, listint_t *second)
{
listint_t *pointr, *prv = NULL;
pointr = first;
while (pointr->next != second)
{
prv = pointr;
pointr = pointr->next;
}
if (prv != NULL)
{
prv->next = first;
}
second = first->next;
first->next = pointr->next;
if (first != pointr && second != first)
{
second = reverse_help(second, first);
}
pointr->next = second;
return (pointr);
}

/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: Pointer to the pointer of the head node
 * Return: Pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
if (head == NULL || *head == NULL)
{
return (NULL);
}
*head = reverse_help(*head, NULL);
return (*head);
}
