#include "search_algos.h"

int advanced_binary(int *array, size_t size, int value)
{
    int left = 0;
    int right = size - 1;
    int mid;

    while (left <= right)
    {
        mid = left + (right - left) / 2;

        if (array[mid] < value)
            left = mid + 1;
        else if (array[mid] > value)
            right = mid - 1;
        else
            return mid;  /* Found the value, return its index */
    }

    return -1;  /* Value not found */
}

