#ifndef _MAIN_H
#define _MAIN_H
/**
 *  * create_array - creates array
 *   * @size: size of array
 *    * @c: char to initialize
 *     * Return: char value
 **/
char *create_array(unsigned int size, char c);
/**
 *  *  * _putchar - writes the character c to std
 *   *   * @c: parameter to compare
 *    *    * Return: 1 or 0
 **/
int _putchar(char c);
/**
 *  * _strdup - duplicates string
 *   * @str: string to copy
 *    * Return: char to newly duplicated string
 **/
char *_strdup(char *str);
/**
 *  * str_concat - concats strings
 *   * @s1: string 1
 *    * @s2: string 2
 *     * Return: returns concated string
 **/
char *str_concat(char *s1, char *s2);
#endif
