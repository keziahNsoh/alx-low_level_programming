#include "search_algos.h"

/**
 * linear_search - searching function
 * @array: array used for searching
 * @size: the size of the array
 * @value: the value of the array
 * Return: index of the value if found, -1 in failure
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int result = -1;

	for (; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			result = i;
			break;
		}
	}
	return (result);
}
