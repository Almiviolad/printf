#include "main.h"
#include <limits.h>
/**
 * _printf - prints and format text
 * @format: format string containing the characters and the specifiers
 * Return: number of printed
 */
int _printf(const char *format, ...)
{
	int (*pfunc)(va_list, flag_type *);
	const char *p;
	va_list args;
	flag_type flags = {0, 0, 0};

	int count = 0;

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (p = format; *p; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == '%')
			{
				count += _putchar('%');
				continue;
			}
			while (flag_switch(*p, &flags))
				p++;
			pfunc = print_func(*p);
			count += (pfunc)
				? pfunc(args, &flags)
				: _printf("%%%c", *p);
		} else
			count += _putchar(*p);
	}
	_putchar(-1);
	va_end(args);
	return (count);
}
