#ifndef _MAIN_H
#define _MAIN_H
/**
 *  *  *  *  * _putchar - writes the character c to std
 *   *   *   *   * @c: parameter to compare
 *    *    *    *    * Return: 1 or 0
 **/
void _puts_recursion(char *s);
/**
 *  * _strlen_recursion - gets string length
 *   * @s: string to count
 *    * Return: int value
 *     */
int _strlen_recursion(char *s);
/**
 *  * _putchar - writes the character c to std
 *   * @c: parameter to compare
 *    * Return: 1 or 0
**/
int _putchar(char c);
/**
 *  * factorial - return factorial
 *   * @n: number to return
 *    * Return: factorial or -1
 **/
int factorial(int n);
/**
 *  * _pow_recursion - gives power
 *   * @x: integer to power
 *    * @y: power to do
 *     * Return: return integer value
 **/
int _pow_recursion(int x, int y);
/**
 *  * _sqrt_recursion - square root of int
 *   * @n: integer to root
 *    * Return: int value
 **/
int _sqrt_recursion(int n);
/**
 *  * _print_rev_recursion - prints reverse with recurse
 *   * @s: string to print
 **/
void _print_rev_recursion(char *s);
/**
 *  * is_print_number - is prime or not
 *   * @n: integer to compare
 *    * Return: boolean
 **/
int is_prime_number(int n);
#endif
