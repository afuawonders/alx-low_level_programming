#include "lists.h"
/**
* add_dnodeint_end - adds a new node at the end of a dlistint_t list
* @head: pointer to the head of the list
* @n: value of the element
* Return: the address of the new element or NULL if it fails
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new = malloc(sizeof(dlistint_t));
dlistint_t *last = *head;
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
new->prev = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
while (last->next != NULL)
last = last->next;
last->next = new;
new->prev = last;
return (new);
}
