#include "lists.h"
/**
 * list_len - returns number of elements in singly linked list
 * @h:pointer to head of a singly linked list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
size_t nod_cont = 0;
while (h != NULL)
{
nod_cont++;
h = h->next;
}
return (nod_cont);
}
