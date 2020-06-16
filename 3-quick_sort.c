#include "sort.h"

/**
 * partition - divide using the pivot
 * @array: array to be sorted
 * @left: the lower position
 * @right: the higher position
 * @size: array size
 * Return: partitioned element
 */
int partition(int *array, int left, int right, size_t size)
{
	int pivot, part, i = left, aux;

	pivot = array[right];
	part = left - 1;

	while (i <= right)
	{
		if (array[i] <= pivot)
		{
			part++;
			if (part != i)
			{
				aux = array[part];
				array[part] = array[i];
				array[i] = aux;
				print_array(array, size);
			}
		}
		i++;
	}
	return (part);
}

/**
 * sorting - validate each position of array
 * @array: array to be sorted
 * @left: the lower position
 * @right: the higher position
 * @size: array size
 * Return: nothing
 */
void sorting(int *array, int left, int right, size_t size)
{
	if (left < right)
	{
		int pi = partition(array, left, right, size);

		sorting(array, left, pi - 1, size);
		sorting(array, pi + 1, right, size);
	}
}

/**
 * quick_sort -  sorts an array of integers in ascending
 * order using the Quick sort algorithm
 * @array: array to sort
 * @size: array size
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	int right = size - 1, left = 0;

	if (!array || !size)
	{
		return;
	}
	else
	{
		sorting(array, left, right, size);
	}
}
