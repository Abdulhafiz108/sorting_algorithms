#include "sort.h"

/**
 * quick_sort - Sorts an array of int in ascending order using quick sort.
 * @array: The array to sort.
 * @size: The size of the array.
 */

void quick_sort(int *array, size_t size)
{
	size_t pivot, i, j;
	int tmp, k;

	if ((!array) || (size < 2))
		return;

	pivot = size - 1;
	while (pivot > 0)
	{
		i = 0;
		j = 0;
		k = 0;
		while ((i <= pivot) && (j <= pivot))
		{
			if (array[i] > array[pivot])
			{
				while (j <= pivot)
				{
					if (array[j] <= array[pivot])
					{
						tmp = array[j];
						array[j] = array[i];
						array[i] = tmp;
						print_array(array, size);
						k = 1;
						break;
					}
					else
					{
						j++;
					}
				}
			}
			i++;
			j++;
		}
		if (k == 0)
			pivot--;
	}
}
