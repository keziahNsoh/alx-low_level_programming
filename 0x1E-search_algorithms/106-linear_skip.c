#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_skiplist - Creates a new skiplist node
 * @value: Value to be stored in the new node
 * Return: Pointer to the newly created skiplist node, or NULL on failure
 */
skiplist_t *create_skiplist(int value)
{
    skiplist_t *new_node = malloc(sizeof(skiplist_t));
    if (new_node == NULL)
        return NULL;
    
    new_node->n = value;
    new_node->index = 0;
    new_node->next = NULL;
    new_node->express = NULL;
    
    return new_node;
}

/**
 * skiplist_insert - Inserts a value into the skiplist
 * @list: Pointer to pointer to the head of the skiplist
 * @value: Value to insert
 */
void skiplist_insert(skiplist_t **list, int value)
{
    skiplist_t *new_node = create_skiplist(value);
    skiplist_t *tmp;

    if (new_node == NULL)
        return;

    tmp = *list;

    if (*list == NULL)
    {
        *list = new_node;
        return;
    }

    while (tmp->next != NULL && tmp->next->n < value)
    {
        tmp = tmp->next;
    }

    new_node->next = tmp->next;
    tmp->next = new_node;
}

/* Other skiplist functions like skiplist_search, skiplist_free, etc. go here */


