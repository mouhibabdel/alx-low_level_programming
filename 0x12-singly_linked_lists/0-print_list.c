#include "lists.h"

/**
 *print_list - prints all elements
 *				of a singly linked lists
 *@h : represents a pointer to the head of a singly linked list
 *
 *Return: the nodes number
 */
size_t print_list(const list_t *h)
{
size_t nod_cont = 0;
while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}
h = h->next;
nod_cont++;
}
return (nod_cont);
}
