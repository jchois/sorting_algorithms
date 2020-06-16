#include "sort.h"

/**
 * partition - divide using the pivot
 * @array: array to be sorted
 * @low: the lower position
 * @high: the higher position
 * @size: array size
 * Return: partitioned element
 */
int partition(int *array, int low, int high, size_t size)
{
	int i, pos, swap, pivot;

	i = low;
	pos = low - 1;
	pivot = array[high];

	while (i <= high)
	{
		if (array[i] <= pivot)
		{
			pos++;
			if (pos != i)
			{
				swap = array[pos];
				array[pos] = array[i];
				array[i] = swap;
				print_array(array, size);
			}
		}
		i++;
	}
	return (pos);
}

/**
 * sorting - validate each position of array
 * @array: array to be sorted
 * @low: the lower position
 * @high: the higher position
 * @size: array size
 * Return: nothing
 */

void sorting(int *array, int low, int high, size_t size)
{
	if (low > high)
		return;

	int p = partition(array, low, high, size);

	sorting(array, low, p - 1, size);
	sorting(array, p + 1, high, size);

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
	int low, high;

	low = 0;
	high = size - 1;

	sorting(array, low, high, size);
}
