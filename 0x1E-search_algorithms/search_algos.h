#ifndef SEARCH_ALGOS_H_
#define SEARCH_ALGOS_H_

#include <stdio.h>
#include <stdlib.h>

/*
 * function that searches for a value in an array of integers
 * using the Linear search algorithm.
*/
int linear_search(int *array, size_t size, int value);

/*
 * function that searches for a value in a sorted array of integers
 * using the Binary search algorithm
*/
int binary_search(int *array, size_t size, int value);

#endif
