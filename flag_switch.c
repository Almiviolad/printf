#include "main.h"
/**
 *flag_switch - on flag if present in format string
 * @s: format specifier
 * @f: flag struct pointer
 *
 * Return: 1 if sucess,0 otherwise
 */
int flag_switch(char s, flag_type *f)
{
	int i = 0;

	switch (s)
	{
		case '+':
			f->plus = 1;
			i = 1;
			break;
		case ' ':
			f->space = 1;
			i = 1;
			break;
		case '#':
			f->hash = 1;
			i = 1;
			break;
	}

	return (i);
}
