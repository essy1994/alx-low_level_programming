#ifndef _MAIN_H
#define _MAIN_H
#include <unistd.h>
/**
 *  *  * _putchar - writes the character c to std
 *   *   * @c: parameter to compare
 *    *    * Return: 1 or 0
 **/
static int _putchar(char c)
{
        write(1, &c, 1);
        return (0);
}
/**
 *  *  * print_alphabet - function to print alphabet
 *   *   *
 **/
void print_alphabet(void);
#endif
