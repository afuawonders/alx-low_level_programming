#include "function_pointers.h"
#include <stdio.h>
/**
* array_iterator - prints each element of array on a new line
* @array: The array with elements
* @size: Number of elements to print
* @action: pointer to the function that prints
* Return: Nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL || action == NULL)
return;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
