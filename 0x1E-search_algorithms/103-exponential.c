#include <stdio.h>
#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array of integers
 *                      using exponential search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in @array
 * @value: Value to search for
 *
 * Return: Index where @value is located, or -1 if not found or array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
    int bound = 1;
    int left, right;
    int j, k; /* Declare loop variables j and k here for C90 compatibility */

    if (array == NULL)
        return -1;

    /* Find the range where the value may exist using exponential search */
    while (bound < (int)size && array[bound] < value) {
        printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
        bound *= 2;
    }

    left = bound / 2;
    right = (bound < (int)size - 1) ? bound : (int)size - 1;

    printf("Value found between indexes [%d] and [%d]\n", left, right);

    /* Search for the value within the identified range using linear search */
    for (j = left; j <= right; ++j) {
        printf("Searching in array: ");
        for (k = left; k <= right; ++k) {
            printf("%d", array[k]);
            if (k < right)
                printf(", ");
        }
        printf("\n");

        if (array[j] == value)
            return j;
    }

    /* Return -1 if value is not found */
    return -1;
}

