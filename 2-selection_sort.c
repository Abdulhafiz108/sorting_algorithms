#include "sort.h"

/**
 * selection_sort - Sorts and array in ascending order using selection sort.
 * @array: The array to sort.
 * @size: The size of the array.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int num, tmp, k;

	if (size > 1)
	{
		for (i = 0; i < size; i++)
		{
			k = -1;
			num = array[i];
			for (j = i; j < size; j++)
			{
				if (num > array[j]) 
				{
					num = array[j];
					k = j;
				}
			}
			if (k != -1)
			{
				tmp = array[i];
				array[i] = array[k];
				array[k] = tmp;
				print_array(array, size);
			}
		}
	}
}
