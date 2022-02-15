#include "sort.h"
/**
 * selection_sort - function that sorts an array of integers
 * @array: array
 * @size: size
*/
void selection_sort(int *array, size_t size)
{
size_t j;
size_t i;
size_t m;
size_t t;

for (j = 0; j < size; j++)
{
	m = j;
	for (i = j + 1; i < size; i++)
{
		if (array[i] < array[m])
		m = i;
}
	if (m != j)
{
		t = array[m];
		array[m] = array[j];
		array[j] = t;
		print_array(array, size);
}
}
}
