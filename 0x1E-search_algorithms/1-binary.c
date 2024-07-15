#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array using binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in @array
 * @value: Value to search for
 *
 * Return: Index where @value is located, or -1 if not found or @array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
    size_t left = 0, right = size - 1, mid;

    if (array == NULL)
        return -1;

    while (left <= right)
    {
        mid = (left + right) / 2;
        printf("Searching in array: ");
        print_array(array, left, right);
        if (array[mid] < value)
            left = mid + 1;
        else if (array[mid] > value)
            right = mid - 1;
        else
            return mid;
    }

    return -1;
}

/**
 * print_array - Prints elements of an array between specified indices
 * @array: Pointer to the first element of the array
 * @start: Starting index
 * @end: Ending index
 */
void print_array(int *array, size_t start, size_t end)
{
    size_t i;

    for (i = start; i <= end; i++)
    {
        if (i > start)
            printf(", ");
        printf("%d", array[i]);
    }
    printf("\n");
}
