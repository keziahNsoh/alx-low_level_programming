#include <stdio.h>
#include <stdlib.h>
#include "skiplist.h"

/**
 * create_skiplist - Creates a new skiplist
 *
 * Return: Pointer to the newly created skiplist, or NULL on failure
 */
skiplist_t *create_skiplist(void)
{
    skiplist_t *list;

    list = malloc(sizeof(skiplist_t));
    if (list == NULL)
        return NULL;

    list->n = 0;
    list->index = 0;
    list->next = NULL;
    list->express = NULL;

    return list;
}

/**
 * skiplist_insert - Inserts a value into the skiplist
 * @list: Pointer to the skiplist
 * @value: Value to be inserted
 */
void skiplist_insert(skiplist_t *list, int value)
{
    skiplist_t *new_node = malloc(sizeof(skiplist_t));
    skiplist_t *tmp = list;

    if (new_node == NULL)
        return;

    new_node->n = value;
    new_node->index = list->index + 1;
    new_node->next = NULL;
    new_node->express = NULL;

    while (tmp->next != NULL && tmp->next->n < value)
    {
        tmp = tmp->next;
    }

    new_node->next = tmp->next;
    tmp->next = new_node;
}

/**
 * skiplist_search - Searches for a value in the skiplist
 * @list: Pointer to the skiplist
 * @value: Value to search for
 *
 * Return: Pointer to the node containing the value, or NULL if not found
 */
skiplist_t *skiplist_search(skiplist_t *list, int value)
{
    skiplist_t *tmp = list;

    while (tmp != NULL)
    {
        while (tmp->next != NULL && tmp->next->n < value)
        {
            tmp = tmp->next;
        }

        if (tmp->next != NULL && tmp->next->n == value)
        {
            return tmp->next;
        }

        tmp = tmp->express;
    }

    return NULL;
}

/**
 * skiplist_free - Frees the entire skiplist
 * @list: Pointer to the skiplist
 */
void skiplist_free(skiplist_t *list)
{
    skiplist_t *tmp;

    while (list != NULL)
    {
        tmp = list;
        list = list->express;
        free(tmp);
    }
}

