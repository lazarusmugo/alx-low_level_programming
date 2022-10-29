#include "main.h"

/**
 *swap_int - swaps values of two integers
 *@a: one value
 *@b: second value
 */
void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
