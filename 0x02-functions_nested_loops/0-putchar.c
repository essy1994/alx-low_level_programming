#include <stdio.h>
#include <unistd.h>
/**
 *  *  * main - entry point
 *   *   *
 *    *    * Return: always returns 0
 *     *     *
 **/
int _putchar(char character[])
{
	/**character = "_putchar";
	**/
	int counter = 0;

	while ((character[counter]) != '\0')
	{
		putchar(character[counter]);
		counter++;
	}
	putchar('\n');
	return (0);
}
