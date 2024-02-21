#include "sort.h"

/**
 * swap - this function swaps two integers.
 * @x: this is the pointer to the first integer.
 * @y: this is the pointer to the second integer.
 */

void swap(int *x, int *y)
{
	int tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}

/**
 * bubble_sort - this function sorts the input array of integers
 *
 * using the Bubble sort algorithm, which has a time
 *
 * complexity of O(n^2) in the worst case.
 *
 * @arr: this is the array to sort
 *
 * @len: this is the size of the array
 */

void bubble_sort(int *arr, size_t len)
{
	size_t m, n;
	bool swapped = false;

	if (arr == NULL || len == 0)
		return;

	for (m = 0; m < len - 1; m++)
	{
		for (n = 0; n < len - m - 1; n++)
		{
			if (arr[n] > arr[n + 1])
			{
				swap(&arr[n], &arr[n + 1]);
				swapped = true;
				print_array(arr, len);
			}
		}
		if (!swapped)
			break;
	}
}
