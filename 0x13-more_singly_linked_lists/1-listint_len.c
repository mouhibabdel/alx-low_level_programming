#include "lists.h"
/**
 * listint_len - returns the numb of elements in a singly linked list
 * @h:pointer to head of singly linked list
 * Return: num elements
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
