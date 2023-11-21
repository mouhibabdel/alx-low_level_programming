#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * @head: Pointer to the pointer of the head node
 * Return: The data (n) of the deleted head node,
 * or 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
int dt;
listint_t *tmp;
if (head == NULL || *head == NULL)
{
return (0);
}
dt = (*head)->n;
tmp = *head;
*head = (*head)->next;
free(tmp);
return (dt);
}
