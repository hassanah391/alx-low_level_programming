#include <stdio.h>
#include <math.h>

/**
 * interpolation_search - Searches for a value in a sorted array
 *  using Interpolation search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: First index where value is located,
 *  or -1 if not found or array is NULL
 */
int interpolation_search(int *array, size_t size, int value) 
{
    size_t low;
    size_t high = size - 1;

    if (array == NULL || size == 0)
        return -1;


    low = 0;

    while (low <= high) 
    {
        size_t pos;

        if (array[low] == array[high]) {
            if (array[low] == value) 
            {
                printf("Value checked array[%lu] = [%d]\n", low, array[low]);
                /* Find the first occurrence */
                while (low > 0 && array[low - 1] == value) {
                low--;
                    printf("Value checked array[%lu] = [%d]\n", low, array[low]);
                }
                return low;
            } else 
            {
            return -1;
            }
        }

        pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

        if (pos >= size) 
        {
            printf("Value checked array[%lu] is out of range\n", pos);
            return -1;
        }

        printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

        if (array[pos] == value) 
        {
            /* Find the first occurrence */
            while (pos > 0 && array[pos - 1] == value) 
            {
                pos--;
                printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
            }
            return pos;
        } 
        else if (array[pos] < value) 
        {
            low = pos + 1;
        } 
        else 
        {
            high = pos - 1;
        }
    }

    return -1;
}
