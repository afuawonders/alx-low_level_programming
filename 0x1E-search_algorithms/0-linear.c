#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @arr: input array
 * @size: size of the array
 * @value: value to search in
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *arr, size_t size, int value)
{
	int j;

	if (arr == NULL)
		return (-1);

	for (j = 0; j < (int)size; j++)
	{
		printf("Value checked arr[%u] = [%d]\n", j, arr[j]);
		if (value == arr[j])
			return (j);
	}
	return (-1);
}
