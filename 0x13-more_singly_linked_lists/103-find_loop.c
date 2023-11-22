#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a listint_t
 * @head: Pointer to the head node
 * Return: (The address of the node where the loop starts)
 *		or (NULL if there is no loop)
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slw = head;
listint_t *fst = head;
while (fst != NULL && fst->next != NULL)
{
slw = slw->next;
fst = fst->next->next;
if (slw == fst)
{
slw = head;
while (slw != fst)
{
slw = slw->next;
fst = fst->next;
}
return (slw);
}
}
return (NULL);
}
