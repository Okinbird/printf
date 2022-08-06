#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct print - Structure for printing various types
 * @type: The type to print
 * @f: The function to print
 */
typedef struct _format
{
char type;
int (*f)(va_list);
} format;

int _strlen(const char *);
int print(char *);

int _putchar(char c);
int buffer(char);

int handler(const char *, va_list);
int percent_handler(const char *, va_list, int *);

int _printf(const char *format, ...);
int print_c(va_list list);
int print_s(va_list list);


#endif
