#include "lists.h"
/**
* insert_dnodeint_at_index - inserts a new node at a given position
* @h: head of the list
* @idx: index of the new node
* @n: value of the new node
* Return: the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new = NULL, *head = *h;
unsigned int i = 1;
if (idx == 0)
{
new = add_dnodeint(h, n);
}
else
{
while (head && i < idx)
{
head = head->next;
i++;
}
if (head || (head == NULL && i == idx))
{
new = malloc(sizeof(dlistint_t));
if (new != NULL)
{
new->n = n;
if (head)
{
new->next = head->next;
new->prev = head;
head->next = new;
if (new->next)
new->next->prev = new;
}
else
{
new->next = NULL;
new->prev = NULL;
*h = new;
}
}
}
}
return (new);
}
