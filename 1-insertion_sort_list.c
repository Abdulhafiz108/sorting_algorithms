#include "sort.h"

/**
 * insertion_sort_list - Sorts a list in ascending order with insertion sort
 * @list: The doubly list to sort.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *first, *last, *mid;

	if ((*list != NULL) && ((*list)->next != NULL) && (list != NULL))
	{
		mid = (*list)->next;
		while (mid)
		{
			first = mid;
			last = first->prev;
			while (last && last->n > first->n)
			{
				if (last->prev)
					last->prev->next = first;

				first->prev = last->prev;
				last->prev = first;
				last->next = first->next;
				first->next = last;
				if (last->next)
					last->next->prev = last;
				while ((*list)->prev)
					*list = (*list)->prev;

				print_list(*list);
				last = first->prev;
			}
			mid = mid->next;
		}
	}
}
