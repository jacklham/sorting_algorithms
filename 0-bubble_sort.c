#include "sort.h"

/**
 * swap - Swap 2 integers
 * @x: The first integer
 * @y: The second integer
 *
 * Return: Void or nothing
 */

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * bubble_sort - Sort an array of integers in ascendingorder
 * using bubble sort algorithm
 * @array: The array to be sorted
 * @size: Size of the array
 *
 * Return: Nothing / void
 */

void bubble_sort(int *array, size_t size)
{
	size_t m, j;
	int can_swapp;

	if (array == NULL || size < 2)
		return;

	for (m = 0; m < size - 1; m++)
	{
		can_swapp = 0;
		/* Keep reducing the number of iteration */
		for (j = 0; j < size - m - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
				can_swapp = 1;
			}
		}
	/* Break if the array has been totally sorted b4 the num of iteration*/
		if (!can_swapp)
			break;
	}
}
