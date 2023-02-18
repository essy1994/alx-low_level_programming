#include <stdio.h>
/**
 *  *  * main - entry point
 *   *   *
 *    *    * Return: always returns 0
 *     *     *
 **/
int main(void)
{ 
	char letter = 'a';
	while (letter != 'q' || letter != 'e')
	{
		putchar(letter);
		letter ++;
	}
	putchar('\n');
	return (0);
}
