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
	char* int_str;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

        int str_len = snprintf(NULL, 0, "%d", n);
	int_str = malloc(str_len + 1);
	snprintf(int_str, str_len+1, "%d", n);
	int last_digit = strlen(int_str) - 1;
	printf("Var: %c", int_str[last_digit]);
	return (0);

}
