#include "search_algos.h"

/**
 * binary_search - function that searches for a value in
 * a sorted array of integers.
 * @array: is a pointer to the first element of the array to search in.
 * @size: is the number of elements in array.
 * @value: value is the value to search for.
 * Return: Your function must return the index where value is located.
*/

int binary_search(int *array, size_t size, int value)
{
	size_t count = 0;
	int *a = array;

	if (!array)
		return (-1);

	while (size)
	{
		for (count = 0, printf("Searching in array: ");
		     count < size; count++)
			printf("%d%s", a[count], count + 1 == size ?
			       "\n" : ", ");

		count = (size - 1) / 2;
		if (a[count] == value)
			return ((a - array) + count);
		else if (a[count] > value)
			size = count;
		else
		{
			a += (count + 1);
			size -= (count + 1);
		}
	}
	return (-1);
}
