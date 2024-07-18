#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted singly linked list
 *             using jump search algorithm
 * @list: Pointer to the head of the list to search in
 * @size: Number of nodes in @list
 * @value: Value to search for
 *
 * Return: Pointer to the node where @value is located, or NULL if not found or list is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    if (list == NULL)
        return NULL;

    size_t jump = sqrt(size);
    listint_t *current = list;
    listint_t *prev = NULL;

    while (current && current->n < value) {
        prev = current;
        for (size_t i = 0; i < jump && current->next; ++i)
            current = current->next;

        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);

    // Perform linear search between prev and current
    while (prev && prev->index <= current->index) {
        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
        if (prev->n == value)
            return prev;
        prev = prev->next;
    }

    return NULL;
}
