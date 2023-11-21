#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n)
 *			in a listint_t linked list
 * @head: Pointer to the head node of the linked list
 * Return: The sum of all the data (n)
 *		0 if the list is empty
 */
int sum_listint(listint_t *head)
{
int smm = 0;
listint_t *curr = head;
while (curr != NULL)
{
smm += curr->n;
curr = curr->next;
}
return (smm);
}
