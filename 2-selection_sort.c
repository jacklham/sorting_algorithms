#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @size: size of the array
 * @array: list with numbers
 */
void selection_sort(int *array, size_t size)
{
	size_t ma, index;
	int tmp, swap, flag = 0;

	if (array == NULL)
		return;
	for (ma = 0; ma< size; ma++)
	{
		tmp = ma;
		flag = 0;
		for (index = ma + 1; index < size; index++)
		{
			if (array[tmp] > array[index])
			{
				tmp = index;
				flag += 1;
			}
		}
		swap = array[ma];
		array[ma] = array[tmp];
		array[tmp] = swap;
		if (flag != 0)
			print_array(array, size);
	}
}
