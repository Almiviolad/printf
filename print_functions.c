#include "main.h"
/**
 *print_func - selects the right printing function for each format spec
 * @s: character that holds the conversion specifier
 * Description: the function loops through the structs array
 * func_arr[] to find a match between the specifier passed to _printf
 * and the first element of the struct, and then the approriate
 * printing function
 * Return: a pointer to the matching printing function
 */
int (*print_func(char s))(va_list, flag_type *)
{
	sym_2_fun all_formats[] = {
		{'i', print_int},
		{'s', print_string},
		{'c', print_char},
		{'d', print_int},
		{'u', print_unsigned},
		{'x', print_hex},
		{'X', print_hex_big},
		{'b', print_binary},
		{'o', print_octal},
		{'R', print_rot13},
		{'r', print_rev},
		{'S', print_bigS},
		{'p', print_address},
		{'%', print_percent}
	};
	int flags = 14;

	int i;

	for (i = 0; i < flags; i++)
	{
		if (all_formats[i].sym == s)
			return (all_formats[i].f);
	}
	return (NULL);
}
