#include "lists.h"

/**
 *print_listint - prints elements of a singly linked lists
 *@h : pointer to the head of singly linked list
 *Return: num of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t count = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
count++;
}
return (count);
}
