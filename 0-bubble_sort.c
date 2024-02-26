#include "sort.h"

/**
 * bubble_sort - sorting an array of integers in ascending order
 * @array: the array to be sorted
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;
	int swapped;

	if (array == NULL || size < 2)
		return;

	/* no of passes required to sort the array*/
	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;

		/*Compare and swap adjacent elements*/
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = 1;
				print_array(array, size);
			}
		}

		if (swapped == 0)
		{
			return;
		}
	}
}