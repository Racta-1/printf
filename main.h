#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct print - struct for printer functions
 * @type_arg: identifier
 * @f: pointer to a printer functions
 *
 * Description: struct that stores pointers to a
 * printer functions.
 */

typedef struct print
{
        char *type_arg;
        int (*f)(va_list, char *, unsigned int);
} print_t;

int _printf(const char *format, ...);
int _prog(va_list __attribute__((unused)), char *, unsigned int);
int _char(va_list arguments, char *buf, unsigned int ibuf);
int _string(va_list arguments, char *buf, unsigned int ibuf);
int _integer(va_list arguments, char *buf, unsigned int ibuf);
int _binary(va_list arguments, char *buf, unsigned int ibuf);
int _unint(va_list arguments, char *buf, unsigned int ibuf);
int _octa(va_list arguments, char *buf, unsigned int ibuf);
int _hexa(va_list arguments, char *buf, unsigned int ibuf);
int _upx_(va_list arguments, char *buf, unsigned int ibuf);
int _usr_(va_list arguments, char *buf, unsigned int ibuf);
int _add_(va_list arguments, char *buf, unsigned int ibuf);
int _reverse(va_list arguments, char *buf, unsigned int ibuf);
int _rot13(va_list arguments, char *buf, unsigned int ibuf);
int _linteger(va_list arguments, char *buf, unsigned int ibuf);
int _lunint(va_list arguments, char *buf, unsigned int ibuf);
int _locta(va_list arguments, char *buf, unsigned int ibuf);
int _lhexa(va_list arguments, char *buf, unsigned int ibuf);
int _lupx_(va_list arguments, char *buf, unsigned int ibuf);
int _hinteger(va_list arguments, char *buf, unsigned int ibuf);
int _hunint(va_list arguments, char *buf, unsigned int ibuf);
int _hocta(va_list arguments, char *buf, unsigned int ibuf);
int _hhexa(va_list arguments, char *buf, unsigned int ibuf);
int _hupx_(va_list arguments, char *buf, unsigned int ibuf);
int _pinteger(va_list arguments, char *buf, unsigned int ibuf);
int _nocta(va_list arguments, char *buf, unsigned int ibuf);
int _nhexa(va_list arguments, char *buf, unsigned int ibuf);
int _nupx_(va_list arguments, char *buf, unsigned int ibuf);
int _sinteger(va_list arguments, char *buf, unsigned int ibuf);
int (*get_print_funct(const char *s, int index))(va_list, char *, unsigned int);
int ev_print_func(const char *s, int index);
unsigned int handl_buff(char *buf, char c, unsigned int ibuf);
int _buff(char *buf, unsigned int nbuf);
char *fill_binary_arr(char *binary, long int int_in, int isneg, int limit);
char *fill_oct_arr(char *bnr, char *oct);
char *fill_long_oct_arr(char *bnr, char *oct);
char *fill_short_oct_arr(char *bnr, char *oct);
char *fill_hex_arr(char *bnr, char *hex, int isupp, int limit);
#endif
