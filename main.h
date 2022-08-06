#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct print - Structure for printing various types
 * @t: The type to print
 * @f: The function to print
 */
typedef struct print
{
char *t;
int (*f)(va_list);
} print_t;


int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);
int print_i(va_list i);
int print_d(va_list d);


#endif
