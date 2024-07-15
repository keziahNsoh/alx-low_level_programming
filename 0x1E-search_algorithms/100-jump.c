#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in @array
 * @value: Value to search for
 *
 * Return: Index where @value is located, or -1 if not found or @array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
    size_t step = sqrt(size);
    size_t prev = 0;

    if (array == NULL)
        return -1;

    /* Perform jump search */
    while (array[(size_t)fmin(step, size) - 1] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", (size_t)fmin(step, size) - 1, array[(size_t)fmin(step, size) - 1]);
        prev = step;
        step += sqrt(size);
        if (prev >= size)
            return -1;
    }

    /* Perform linear search in the block */
    while (array[prev] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
        prev++;
        if (prev == (size_t)fmin(step, size))
            return -1;
    }

    /* If the element is found, return its index */
    if (array[prev] == value)
    {
        printf("Value found between indexes [%lu] and [%lu]\n", (size_t)(prev - sqrt(size)), prev);
        return prev;
    }

    /* If element is not present in array, return -1 */
    return -1;
}

