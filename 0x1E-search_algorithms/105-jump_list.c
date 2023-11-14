#include "search_algos.h"
#include <math.h>

/**
* jump_list - Searches for a value in a linked list of integers
*             using the Jump search algorithm.
* @list: Input linked list.
* @size: Size of the linked list.
* @value: Value to search for.
* Return: Node containing the value or NULL if not found.
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
size_t jump_index, step, jump_size;
listint_t *prev_node;

if (list == NULL || size == 0)
return (NULL);

jump_size = (size_t)sqrt((double)size);
jump_index = 0;
step = 0;

do {
prev_node = list;
step++;
jump_index = step *jump_size;

while (list->next && list->index < jump_index)
list = list->next;

if (list->next == NULL && jump_index != list->index)
jump_index = list->index;

printf("Value checked at index [%d] = [%d]\n", (int)jump_index, list->n);

} while (jump_index < size && list->next && list->n < value);

printf("Value found between indexes ");
printf("[%d] and [%d]\n", (int)prev_node->index, (int)list->index);

for (; prev_node && prev_node->index <= list->index;
prev_node = prev_node->next)
{
printf("Value checked at index [%d] = [%d]\n",
(int)prev_node->index, prev_node->n);
if (prev_node->n == value)
return (prev_node);
}

return (NULL);
}
