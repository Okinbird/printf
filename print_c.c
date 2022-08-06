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
  char ch = (char)va_arg(c, int);

  _putchar(ch);
  return (1);
}

/**
 * print_s - prints a string
 * @s: string to print
 *
 * Return: number of chars printed
 */
int print_s(va_list s)
{
  int count;
  char *str = va_arg(s, char *);

  if (str == NULL)
    str = "(null)";
  for (count = 0; str[count]; count++)
    {
      _putchar(str[count]);
    }
  return (count);
}
