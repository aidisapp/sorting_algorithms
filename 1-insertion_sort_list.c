#include "sort.h"

/**
 * swap_nodes - this function swaps two nodes in a doubly linked list.
 *
 * @node_a: this is the pointer to the first node.
 *
 * @node_b: this is the pointer to the second node.
 */

void swap_nodes(listint_t **node_a, listint_t **node_b)
{
	listint_t *temp;

	if (*node_a == NULL || *node_b == NULL)
		return;

	temp = *node_a;
	*node_a = *node_b;
	*node_b = temp;

	if ((*node_a)->prev != NULL)
		(*node_a)->prev->next = *node_a;
	if ((*node_b)->prev != NULL)
		(*node_b)->prev->next = *node_b;

	temp = (*node_a)->prev;
	(*node_a)->prev = (*node_b)->prev;
	(*node_b)->prev = temp;
}

/**
 * insertion_sort_list - this fucntion sorts a doubly linked list of integers
 *
 * in ascending order using the Insertion sort algorithm.
 *
 * @list: this is the pointer to a pointer to the head of the list.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		temp = current->prev;
		while (temp != NULL && temp->n > current->n)
		{
			swap_nodes(&temp->next, &current);
			if (temp->prev == NULL)
				*list = current;
			if (current->prev == NULL)
				temp = NULL;
			else
				temp = current->prev;
			print_list(*list);
		}
		current = current->next;
	}
}
