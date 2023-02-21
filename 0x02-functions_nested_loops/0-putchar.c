#include <stdio.h>
/**
 *  *  * main - entry point
 *   *   *
 *    *    * Return: always returns 0
 *     *     *
 **/
int main(void)
{
	char string[] = "_putchar";
	int counter = 0;

	while ((string[counter]) != '\0')
	{
		putchar(string[counter]);
		counter++;
	}
	putchar('\n');
	return (0);
}
