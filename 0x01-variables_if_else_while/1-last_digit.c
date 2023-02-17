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
        printf("%s", int_str);
        int str_len = strlen(int_str);
	int idx = str_len -1;
	printf("Var: %c", int_str[idx]);
	return (0);

}
