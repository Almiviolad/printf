#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
/**
 *struct flags - struct containing flags when format strings contain flags
 *@plus: flag for the '+' character
 *@space: flag for the ' ' character
 *@hash: flag for the '#' character
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flag_type;
/**
 *struct symbol_to_functions - struct for the format spec
 *and corresponding func
 *@format_sym: format symbol to specify format
 *@func: function to print arg
 */
typedef struct symbol2func
{
	char sym;
	int (*f)(va_list arg_list, flag_type *f);
} sym_2_fun;
int print_int(va_list l, flag_type *f);
void print_number(int n);
int print_unsigned(va_list l, flag_type *f);
int count_digit(int i);
int print_hex(va_list l, flag_type *f);
int print_hex_big(va_list l, flag_type *f);
int print_binary(va_list l, flag_type *f);
int print_octal(va_list l, flag_type *f);
char *convert(unsigned long int num, int base, int lowercase);
int _printf(const char *format, ...);
int (*get_print(char s))(va_list, flag_type *);
int flag_switch(char s, flag_type *f);
int print_string(va_list l, flag_type *f);
int print_char(va_list l, flag_type *f);
int _putchar(char c);
int _puts(char *str);
int print_rot13(va_list l, flag_type *f);
int print_rev(va_list l, flag_type *f);
int print_bigS(va_list l, flag_type *f);
int print_address(va_list l, flag_type *f);
int print_percent(va_list l, flag_type *f);
int (*print_func(char s))(va_list, flag_type *);
#endif/*MAIN_H*/
