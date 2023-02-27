#include "main.h"
/**
 * swap_int - function that swaps the values of two integers
 * @a: int to be swapped
 * @b: int to be swapped
 * Return: Always 0.
*/
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
