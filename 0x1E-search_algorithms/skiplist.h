#ifndef SKIPLIST_H
#define SKIPLIST_H

typedef struct skiplist_s
{
    int n;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;

skiplist_t *linear_skip(skiplist_t *list, int value);

#endif /* SKIPLIST_H */

