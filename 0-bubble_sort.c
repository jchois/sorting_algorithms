#include "sort.h"

/**
 * bubble_sort -  function that sorts an array
 * @array: array to sort
 * @size: array size
 * Return: nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;

	if (!array || !size)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; i++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
