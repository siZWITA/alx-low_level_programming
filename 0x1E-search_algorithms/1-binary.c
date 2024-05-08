#include "search_algos.h"

/**
 * binary_search - searches for a value in an array using linear search
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of the value if found, -1 otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, start, end, mid;

	if (array == NULL)
		return (-1);

	start = 0;
	end = size - 1;

	while (start <= end)
	{
		mid = (start + end) / 2;
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			printf("%d", array[i]);
			if (i + 1 <= end)
				printf(", ");
		}
		printf("\n");
		if (value < array[mid])
			end = mid - 1;
		else if (value > array[mid])
			start = mid + 1;
		else
			return (mid);
	}
	return (-1);
}
