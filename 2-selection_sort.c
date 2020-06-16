#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: array to sort
 * @size: array sixe
 * Return: nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, num_min;
	int aux;

	if (array == NULL || !size)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		num_min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[num_min])
				num_min = j;
		}
		aux = array[i];
		array[i] = array[num_min];
		array[num_min] = aux;
		print_array(array, size);
	}
}
