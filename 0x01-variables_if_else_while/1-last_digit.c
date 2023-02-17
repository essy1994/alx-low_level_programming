#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 **/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	char int_str[20];
	sprintf(int_str, "%d", n);
	int length_of_string = strlen(int_str);
	int index_of_last = length_of_string - 1;
	printf("Last digit: %c", int_str[index_of_last]);
	return (0);

}
