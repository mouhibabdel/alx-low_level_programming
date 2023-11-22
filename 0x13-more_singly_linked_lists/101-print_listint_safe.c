#include "lists.h"

/**
 * find_listint_loop_pl - finds a loop in a linked list
 * @head: linked list to search
 * Return: address of node where loop starts/returns, NULL if no loop
 */
listint_t *find_listint_loop_pl(listint_t *head)
{
listint_t *poitr, *ind;
if (head == NULL)
{
return (NULL);
}
for (ind = head->next; ind != NULL; ind = ind->next)
{
if (ind == ind->next)
{
return (ind);
}
for (poitr = head; poitr != ind; poitr = poitr->next)
{
if (poitr == ind->next)
{
return (ind->next);
}
}
}
return (NULL);
}

/**
 * print_listint_safe - prints a linked list, even if it
 * has a loop
 * @head: head of list to print
 * Return: number of nodes printed
 */
size_t print_listint_safe(const listint_t *head)
{
size_t lengh = 0;
int lp;
listint_t *loopnode;
loopnode = find_listint_loop_pl((listint_t *) head);
for (lengh = 0, lp = 1; (head != loopnode || lp) && head != NULL; lengh++)
{
printf("[%p] %d\n", (void *) head, head->n);
if (head == loopnode)
{
lp = 0;
}
head = head->next;
}
if (loopnode != NULL)
{
printf("-> [%p] %d\n", (void *) head, head->n);
}
return (lengh);
}
