#include <stdio.h>
/**
 *  *  * main - entry point
 *   *   *
 *    *    * Return: always returns 0
 *     *     *
 **/
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar('0' + number);
		if (putchar('0' + number) != 9)
		{
			putchar(',');
			putchar(' ');\
		}
	}
	putchar('\n');
	return (0);
}
