#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/*Searching algorthims libraries used in the task*/
#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>


int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
size_t min(size_t a, size_t b);
int main(void);

#endif
