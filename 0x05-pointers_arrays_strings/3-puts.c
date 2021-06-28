#include "holberton.h"
/**
 * _puts - prints a string followed by a nes line to stdout
 *
 * @str: string to print
 *
 * Return: void
 */
void _puts(char *str)
{
char newString[];
char newline[] = "/n";
*str = newString;
_puts(newString);
_puts(newline);
}
