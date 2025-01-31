#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/* Static helper functions */
static void print_subarray(int *array, size_t start, size_t end);
static int binary_search_helper(int *array, size_t low, size_t high, int value);

/**
 * exponential_search - Searches for a value in a sorted array using Exponential search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: First index where value is located, or -1 if not found or array is NULL
 */
int exponential_search(int *array, size_t size, int value) {
    size_t i = 1;
    size_t low, high;

    if (array == NULL || size == 0)
        return -1;

    if (array[0] == value) {
        printf("Value checked array[0] = [%d]\n", array[0]);
        return 0;
    }

    while (i < size && array[i] <= value) {
        printf("Value checked array[%lu] = [%d]\n", (unsigned long)i, array[i]);
        if (array[i] == value)
            return (int)i;
        i *= 2;
    }

    low = i / 2;
    high = (i < size) ? i : size - 1;

    printf("Value found between indexes [%lu] and [%lu]\n",
           (unsigned long)low, (unsigned long)high);
    return binary_search_helper(array, low, high, value);
}

/**
 * binary_search_helper - Helper function to perform binary search within a range
 * @array: Pointer to the array
 * @low: Starting index of the range
 * @high: Ending index of the range
 * @value: Value to search for
 *
 * Return: First index where value is located, or -1 if not found
 */
static int binary_search_helper(int *array, size_t low, size_t high, int value) {
    size_t left = low;
    size_t right = high;
    size_t mid;
    size_t result = (size_t)-1; /* Use size_t for indices */

    while (left <= right) {
        printf("Searching in array: ");
        print_subarray(array, left, right);
        printf("\n");

        mid = left + (right - left) / 2;

        if (array[mid] == value) {
            result = mid;
            /* Find the first occurrence */
            while (result > left && array[result - 1] == value) {
                result--;
                printf("Value checked array[%lu] = [%d]\n", (unsigned long)result, array[result]);
            }
            return (int)result; /* Cast to int for return type */
        } else if (array[mid] < value) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

/**
 * print_subarray - Prints elements of an array between two indices
 * @array: Pointer to the array
 * @start: Starting index
 * @end: Ending index
 */
static void print_subarray(int *array, size_t start, size_t end) {
    size_t i;

    for (i = start; i <= end; i++) {
        printf("%d", array[i]);
        if (i < end)
            printf(", ");
    }
}
