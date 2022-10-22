 #include "main.h"
/**
 * print_address - prints address in hexadecimal
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_address(va_list l, flag_type *f)
{
	char *str;
	unsigned long int p = va_arg(l, unsigned long int);

	int count = 0;

	(void)f;

	if (!p)
		return (_puts("(nil)"));
	str = convert(p, 16, 1);
	count += _puts("0x");
	count += _puts(str);
	return (count);
}
