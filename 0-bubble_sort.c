#include "sort.h"
/**
 * bubble_sort - sorts an array in ascending order using the Bubble sort
 *
 * @array: the array of integers
 * @size: the size of the array
 *
 * Return: no return
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	int temp;

	if (!array || !size)
		return;

	for (i = 0; i < size - 1; i++)
	{
		if (array[i] > array[i + 1])
		{
			temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
			print_array(array, size);
		}
	}
}
