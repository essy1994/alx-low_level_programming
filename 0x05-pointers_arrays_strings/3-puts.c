#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *  * _puts - puts a string
 *   *
 *    * @str: string to print
**/
void _puts(char *str)
{
	int i = 0;
	while(*(str + i) != '\0')
	{
		fputs(*(str + i), stdout);
	}
}
