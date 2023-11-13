#include "search_algos.h"

/**
* linear_search - searches for a value in an array of
* integers using the Linear search algorithm
* @arr: input array
* @arr_size: size of the array
* @target_value: value to search for
* Return: Index of the target_value if found, otherwise -1
*/
int linear_search(int *arr, size_t arr_size, int target_value)
{
int index;

if (arr == NULL)
return (-1);

for (index = 0; index < (int)arr_size; index++)
{
printf("Value checked arr[%u] = [%d]\n", index, arr[index]);
if (target_value == arr[index])
return (index);
}

return (-1);
}
