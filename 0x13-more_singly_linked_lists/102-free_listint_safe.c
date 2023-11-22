#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop_fl - finds a loop in a linked list
 *
 * @head: linked list to search
 *
 * Return: address of node where loop starts/returns, NULL if no loop
 */
listint_t *find_listint_loop_fl(listint_t *head)
{
listint_t *potr, *ed;
if (head == NULL)
{
return (NULL);
}
for (ed = head->next; ed != NULL; ed = ed->next)
{
if (ed == ed->next)
{
return (ed);
}
for (potr = head; potr != ed; potr = potr->next)
{
if (potr == ed->next)
{
return (ed->next);
}
}
}
return (NULL);
}

/**
 * free_listint_safe - frees a listint list, even if it has a loop
 *
 * @h: head of list
 *
 * Return: number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *nxt, *loope;//next //loopnode
size_t lengh;
int lop = 1;
if (h == NULL || *h == NULL)
{
return (0);
}
loope = find_listint_loop_fl(*h);
for (lengh = 0; (*h != loope || lop) && *h != NULL; *h = nxt)
{
lengh++;
nxt = (*h)->nxt;
if (*h == loope && lop)
{
if (loope == loope->nxt)
{
free(*h);
break;
}
lengh++;
nxt = nxt->nxt;
free((*h)->nxt);
lop = 0;
}
free(*h);
}
*h = NULL;
return (lengh);
}
