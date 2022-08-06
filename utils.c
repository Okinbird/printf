#include "main.h"

/**
 * _strlen - Caluculate the length of a string
 * @str: String
 *
 * Return: Length
 */
int _strlen(const char *str)
{
  int i;
  for (i = 0; str[i] != 0; i++)
    ;
  return (i);
}

/**
 * print - Print char
 * @str: String
 *
 * Return: String length
 */
int print(char *str)
{
  int i;
  for (i = 0; str[i] != '\0'; ++i)
    _putchar(str[i]);
  return (i);
}
