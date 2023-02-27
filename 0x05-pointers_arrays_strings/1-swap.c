#include "main.h"
#include <stdio.h>
/**
 *  * swap_int - swaps integers
 *   *
 *    * @a: first integer
 *     * @b: second integer
**/
void swap_int(int *a, int *b)
{
	int temp_value;

	temp_value = *a;
	*a = *b;
	*b = temp_value;


}
