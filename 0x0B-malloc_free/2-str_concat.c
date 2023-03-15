#include "main.h"
#include <stdlib.h>
/**
 *  * str_concat - concats strings
 *   * @s1: string 1
 *    * @s2: string 2
 *     * Return: returns concated string
 **/
char *str_concat(char *s1, char *s2)
{
	int i, c = 0, d = 0;
	char *t;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[c] != '\0')
	{
		c++;
	}
	while (s2[d] != '\0')
	{
		d++;
	}
	t = malloc(sizeof(char) * (c + d + 1));
	if (t == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < c; i++)
	{
		t[i] = s1[i];
	}
	for (i = 0; i < d; i++)
	{
		t[i + c] = s2[i];
	}
	return (t);
}
