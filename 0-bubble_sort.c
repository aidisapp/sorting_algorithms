#include "sort.h"

/**
 * bubble_sort - this sorts an array of integers in ascending
 *
 * order using the Bubble sort algorithm
 *
 * @arr: this is the array to sort
 *
 * @len: this is the size of the array
 */

void bubble_sort(int *arr, size_t len)
{
	size_t m, n;

	int temp;
	int swapped;

	for (m = 0; m < len - 1; m++)
	{
		swapped = 0;
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