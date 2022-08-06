#include "main.h"
#include <stdlib.h>

/**
 * print_c - Prints a char
 * @list: The char to print
 *
 * Return: Always 1
 */
int print_c(va_list list)
{
  int aux;
  aux = va_arg(list, int);
  _putchar(aux);
  return (1);
}

/**
 * print_s - Prints a string
 * @list: The string to print
 *
 * Return: The number of chars printed
 */
int print_s(va_list list)
{
  char *p;
  int p_len;

  p = va_arg(list, char*);
    p_len = print((p != NULL) ? p : "(null)");
    return (p_len);
}
