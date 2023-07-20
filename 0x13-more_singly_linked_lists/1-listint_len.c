#include "lists.h"
/**
* listint_len - returns the number of elements in a listint_t list.
* @h: linked list of type listint_t to traverse
* Return: number of nodes
*/
size_t listint_len(const listint_t *h)
{
size_t alx = 0;
while (h)
{
alx++;
h = h->next;
}
return (alx);
}
