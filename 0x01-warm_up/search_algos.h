#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stdio.h>

int binary_search(int *array, size_t size, int value);
int bin_search(int *array, size_t l, size_t r, int value, size_t size);
void print_array(const int *array, size_t l, size_t r);

#endif
