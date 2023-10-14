#ifndef _SEARCH_ALGOS_
#define _SEARCH_ALGOS_

#include <stdlib.h>
#include <stdio.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binary_search_rec(int *array, int low, int high, int value);
void print_array(int *array, int i, size_t size);
#endif
