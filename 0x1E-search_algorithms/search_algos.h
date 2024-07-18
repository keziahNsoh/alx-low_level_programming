#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>

/* Structures */

/**
 * struct skiplist_s - Linked list node with an express lane
 * @n: Integer stored in the node
 * @index: Index of the node in the list
 * @next: Pointer to the next node in the list
 * @express: Pointer to the next node in the express lane
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;

/**
 * struct listint_s - singly linked list
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;


/* Linear search */
int linear_search(int *array, size_t size, int value);

/* Binary search */
int binary_search(int *array, size_t size, int value);

/* Jump search */
int jump_search(int *array, size_t size, int value);

/* Interpolation search */
int interpolation_search(int *array, size_t size, int value);

/* Exponential search */
int exponential_search(int *array, size_t size, int value);

/* Skiplist */
skiplist_t *linear_skip(skiplist_t *list, int value);

/* Function prototypes */
int advanced_binary(int *array, size_t size, int value);

/* Jump list */
listint_t *jump_list(listint_t *list, size_t size, int value);

/* Sorting algorithms */
void bubble_sort(int *array, size_t size);
void insertion_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

#endif /* SEARCH_ALGOS_H */
