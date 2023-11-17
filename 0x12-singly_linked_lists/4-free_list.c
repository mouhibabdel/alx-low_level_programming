#include "lists.h"

/**
 * free_list -  frees a list_t list.
 * @head: a pointer to a pointer of type list_t
 * Return: void
 */
void free_list(list_t *head)
{
list_t *curr;
while (head != NULL)
{
curr = head;
head = head->next;
free(curr->str);
free(curr);
}
}
