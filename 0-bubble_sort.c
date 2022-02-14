#include "sort.h"
/**
 * bubble_sort - function that sorts an array of integers
 * @array: array
 * @size: size
*/
void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	int l;
	int sw;

	if (size < 1)
		return;
	while (l)
	{
		l = 0;
		for (i = 0; i < (size - 1); i++)
		{
			if (array[i] > array[i + 1])
			{
				sw = array[i];
				array[i] = array[i + 1];
				array[i + 1] = sw;
				l += 1;
				print_array(array, size);
			}
		}
	}
}
