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
	char *int_str;
	int str_len;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	str_len = snprintf(NULL, 0, "%d", n);
	int_str = malloc(str_len + 1);
	snprintf(int_str, str_len + 1, "%d", n);
	last_digit = strlen(int_str) - 1;
	if ((n > 0) && (int)int_str[last_digit] > 5)
	{
		printf("Last digit of " "%d " "is " "%c " "and is greater than 5\n", n, int_str[last_digit]);
        }
	else if((int)int_str[last_digit] == 0)
	{ 
		printf("Last digit of " "%d " "is " "%c " "and is 0\n", n, int_str[last_digit]);
	}
	else if(((int)int_str[last_digit] < 6) && ((int)int_str[last_digit] != 0))
	{ 
		printf("Last digit of " "%d " "is " "%c " "and is less than 6 and not 0\n", n, int_str[last_digit]); 
	}
	else if(n < 0)
		printf("Last digit of " "%d " "is " "-%c " "and is less than 6 and not 0\n", n, int_str[last_digit]);
       return (0);

}
