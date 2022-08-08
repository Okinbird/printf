#include "main.h"
#include <stdlib.h>


/**
 * check_for_specifiers - checks if there is a valid format specifier
 * @format: possible format specifier
 *
 * Return: pointer to valid function or NULL
 */
/**
static int (*check_for_specifiers(const char *format))(va_list)
{
unsigned int i = 0;
print_t p[] = {
{"c", print_c},
{"s", print_s},
{"i", print_i},
{"d", print_d},
{"b", print_b},
{"u", print_u},
{"o", print_o},
{"x", print_x},
{"X", print_X},
{"S", print_S},
{"p", print_p},
{NULL, NULL}
};
for (i = 0; p[i].t != NULL; i++)
{
if (*(p[i].t) == *format)
{
break;
}
}
return (p[i].f);
}

**/

/**
 * _printf - Prints anything
 * @format: List of argument types passsed to the function
 *
 * Return: Number of characters printed
 */

/**
int _printf(const char *format, ...)
{
unsigned int i = 0, count = 0;
va_list valist;

int (*f)(va_list);

if (format == NULL)
return (-1);
va_start(valist, format);
while (format[i])
{
for (; format[i] != '%' && format[i]; i++)
{
_putchar(format[i]);
count++;
}
if (!format[i])
return (count);
f = check_for_specifiers(&format[i + 1]);
if (f != NULL)
{
count += f(valist);
i += 2;
continue;
}
if (!format[i + 1])
return (-1);
_putchar(format[i]);
count++;
if (format[i + 1] == '%')
i += 2;
else
i++;
}
va_end(valist);
return (count);
}
**/

#include "main.h"

/**
 * cleanup - Peforms cleanup operations for _printf.
 * @args: A va_list of arguments provided to _printf.
 * @output: A buffer_t struct.
 */
void cleanup(va_list args, buffer_t *output)
{
  va_end(args);
  write(1, output->start, output->len);
  free_buffer(output);
}

/**
 * run_printf - Reads through the format string for _printf.
 * @format: Character string to print - may contain directives.
 * @output: A buffer_t struct containing a buffer.
 * @args: A va_list of arguments.
 *
 * Return: The number of characters stored to output.
 */
int run_printf(const char *format, va_list args, buffer_t *output)
{
  int i, wid, prec, ret = 0;
  char tmp;
  unsigned char flags, len;
  unsigned int (*f)(va_list, buffer_t *,
		    unsigned char, int, int, unsigned char);

  for (i = 0; *(format + i); i++)
    {
      len = 0;
      if (*(format + i) == '%')
	{
	  tmp = 0;
	  flags = handle_flags(format + i + 1, &tmp);
	  wid = handle_width(args, format + i + tmp + 1, &tmp);
	  prec = handle_precision(args, format + i + tmp + 1,
				  &tmp);
	  len = handle_length(format + i + tmp + 1, &tmp);

	  f = handle_specifiers(format + i + tmp + 1);
	  if (f != NULL)
	    {
	      i += tmp + 1;
	      ret += f(args, output, flags, wid, prec, len);
	      continue;
	    }
	  else if (*(format + i + tmp + 1) == '\0')
	    {
	      ret = -1;
	      break;
	    }
	}
      ret += _memcpy(output, (format + i), 1);
      i += (len != 0) ? 1 : 0;
    }
  cleanup(args, output);
  return (ret);
}

/**
 * _printf - Outputs a formatted string.
 * @format: Character string to print - may contain directives.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
  buffer_t *output;
  va_list args;
  int ret;

  if (format == NULL)
    return (-1);
  output = init_buffer();
  if (output == NULL)
    return (-1);

  va_start(args, format);

  ret = run_printf(format, args, output);

  return (ret);
}
