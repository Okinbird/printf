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
