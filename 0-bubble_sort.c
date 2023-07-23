#include "sort.h"

/**
 * bubble_sort - Sorts an array in ascending order using bubble sort algorithm
 * @array: The array to sort
 * @size: The size of the array.
 */

void bubble_sort(int *array, size_t size)
{
	size_t j, k;
	int tmp;

	if (size > 1)
	{
		while (1)
		{
			k = 1;
			j = 0;
			while (array[j + 1])
			{
				if (array[j] > array[j + 1])
				{
					tmp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = tmp;
					print_array(array, size);
					k = 0;
				}
				j++;
			}
			if (k == 1)
				break;
		}
	}
}
