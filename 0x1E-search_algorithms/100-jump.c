#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in an array of
 * integers using the Jump search algorithm.
 * @array: Input array.
 * @size: Size of the array.
 * @value: Value to search for.
 * Return: Index of the number or -1 if not found.
 */
int jump_search(int *array, size_t size, int value)
{
	int current, jump_size, step, prev;

	if (array == NULL || size == 0)
		return (-1);

	jump_size = (int)sqrt((double)size);
	step = 0;
	prev = current = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", current, array[current]);

		if (array[current] == value)
			return (current);

		step++;
		prev = current;
		current = step * jump_size;
	} while (current < (int)size && array[current] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, current);

	for (; prev <= current && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
