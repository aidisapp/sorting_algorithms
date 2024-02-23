#ifndef MY_SORT_H
#define My_SORT_H

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <stdbool.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* To be Compiled alongside my functions during the correction */

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* These are the functions of the tasks themselves */
void bubble_sort(int *arr, size_t len);
void insertion_sort_list(listint_t **list);
#endif /* MY_SORT_H */
