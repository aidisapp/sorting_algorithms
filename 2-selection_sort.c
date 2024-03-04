#include "sort.h"

/**
 * swap_integers - Swap two integers in an array.
 * @a: Pointer to the first integer to swap.
 * @b: Pointer to the second integer to swap.
 */

void swap_integers(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - Sorts an array of integers in ascending order
 *                  using the selection sort algorithm.
 * @array: Pointer to the first element of the array.
 * @size: Size of the array.
 *
 * Description: Prints the array after each swap.
 */

void selection_sort(int *array, size_t size)
{
	int *swappy;
	size_t x, y;

	if (array == NULL || size < 2)
		return;

	for (x = 0; x < size - 1; x++)
	{
		swappy = array + x;
		for (y = x + 1; y < size; y++)
		{
			if (array[y] < *swappy)
				swappy = array + y;
		}

		if (array + x != swappy)
		{
			swap_integers(array + x, swappy);
			print_array(array, size);
		}
	}
}
