#include "search_algos.h"

/**
 * binary_search - finding the value faster using good technique
 * @array: the array
 * @size: the size
 * @value: the value required
 * Return: the index on sucess
 */
int binary_search(int *array, size_t size, int value)
{
	size_t first = 0, last = size - 1, i = 0, mid = 0;

	do {
		printf("Searching in array: ");
		for (i = first; i <= last; i++)
		{
			if (i == last)
			{
				printf("%d\n", array[i]);
				continue;
			}
			printf("%d, ", array[i]);
		}
		mid = (last + first) / 2;
		if (array[mid] < value)
		{
			first = mid + 1;
		}
		else if (array[mid] > value)
		{
			last = mid - 1;
		}
		else
			return (mid);
	} while (first <= last);

	return (-1);
}
