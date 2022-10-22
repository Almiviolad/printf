#include "main.h"
/**
*_putchar - print a char to stdout using a buffer of 1024 fir write
*@c: char to print
*Return: number of char printed
*/
int _putchar(char c)
{
	static char buf[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &buf, i);
		i = 0;
	}
	if (c != -1)
	{
		buf[i] = c;
		i++;
	}
	return (1);
}
/**
 * _puts - prints a string
 * @str: pointer to the string to print
 * Return: number of chars printed
 */
int _puts(char *str)
{
	static int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
