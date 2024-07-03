/**
 * swap_int -  swaps the values of two integers.
 * @a: it's an inteager value
 * @b: it's an inteager value
 *
 * Return: Always null.
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
