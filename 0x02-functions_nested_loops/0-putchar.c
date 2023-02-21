#include <stdio.h>
#include <unistd.h>
/**
 *  *  * main - entry point
 *   *   *
 *    *    * Return: always returns 0
 *     *     *
 **/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
