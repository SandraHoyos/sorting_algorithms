#include "sort.h"

/**
 *selection_sot - sorts through selection
 *@array: array to sort
 *@size: size of the array
 */

void selection_sort(int *array, size_t size)
{
	int flag = 0, temp = 0, site = 0;
	size_t i,j;

	if (!array)
		return;
	for (i = 0; i < size; i++)
	{
		flag = 0;
		temp = 0;
		for (j = i + 1; j < size; j++)
		{
			if(!flag && array[j] < array[i])
			{
				temp = array[j];
				site = j;
				flag = 1;
			}
			if (flag && array[j] < temp)
			{
				temp = array[j];
				site = j;
			}
		}
		if (flag)

		{
			array[site] = array[i];
			array[i] = tmp;
			print_array(array, size);
		}
	}
}
