#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in array using binary search
 * @array: pointer to array
 * @size: number of elements in array
 * @value: value to search for
 * Return: -1 or index of value for success or failure
 */

int binary_search(int *array, size_t size, int value)
{
	if (size && array)
		return (bin_search(array, 0, size - 1, value, size));
	return (-1);
}


/**
 * bin_search - searches for a value in array using binary search
 * @array: pointer to array
 * @l: least element in array
 * @r: greatest element in array
 * @size: number of elements in array
 * @value: value to search for
 * Return: -1 or index of value for success or failure
 */

int bin_search(int *array, size_t l, size_t r, int value, size_t size)
{
	size_t mid;
	(void)size;

	print_array(array, l, r);
	mid = l + ((r - l) / 2);
	if (array[mid] == value)
		return (mid);
	if (r == 0 || l == r)
		return (-1);
	else if (array[mid] < value)
		l = mid + 1;
	else
		r = mid;
	return (bin_search(array, l, r, value, size));
}

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @l: least element in array
 * @r: greatest element in array
 */
void print_array(const int *array, size_t l, size_t r)
{
	printf("Searching in array: ");
	while (l <= r)
	{
		printf("%d", array[l]);
		if (l++ < r)
			printf(", ");
		else
			printf("\n");
	}
}
