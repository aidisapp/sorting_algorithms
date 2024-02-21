#include "sort.h"

/**
 * swap - this function swaps two integers.
 * @x: this is the pointer to the first integer.
 * @y: this is the pointer to the second integer.
 */

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
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
	int temp;
	int swapped;
	size_t m, n;

	if (arr == NULL || len == 0)
		return;

	swapped = 0;

	for (m = 0; m < len - 1; m++)
	{
		for (n = 0; n < len - m - 1; n++)
		{
			if (arr[n] > arr[n + 1])
			{
				temp = arr[n];
				arr[n] = arr[n + 1];
				arr[n + 1] = temp;
				swapped = 1;
				print_array(arr, len);
			}
		}
		if (!swapped)
			break;
	}
}
