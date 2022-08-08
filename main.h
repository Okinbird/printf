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
int print_b(va_list b);
int print_u(va_list u);
int print_o(va_list o);
int print_x(va_list x);
int print_X(va_list X);
int print_S(va_list S);
int print_p(va_list p);



/**
 * struct buffer_s - A new type defining a buffer struct.
 * @buffer: A pointer to a character array.
 * @start: A pointer to the start of buffer.
 * @len: The length of the string stored in buffer.
 */
typedef struct buffer_s
{
  char *buffer;
  char *start;
  unsigned int len;
} buffer_t;

/**
 * struct flag_s - A new type defining a flags struct.
 * @flag: A character representing a flag.
 * @value: The integer value of the flag.
 */
typedef struct flag_s
{
  unsigned char flag;
  unsigned char value;
} flag_t;

unsigned int convert_c(va_list args, buffer_t *output,
		       unsigned char flags, int wid, int prec, unsigned char len);
unsigned int convert_s(va_list args, buffer_t *output,
		       unsigned char flags, int wid, int prec, unsigned char len);
unsigned int convert_percent(va_list args, buffer_t *output,
			     unsigned char flags, int wid, int prec, unsigned char len);



unsigned char handle_flags(const char *flags, char *index);
unsigned char handle_length(const char *modifier, char *index);
int handle_width(va_list args, const char *modifier, char *index);
int handle_precision(va_list args, const char *modifier, char *index);
unsigned int (*handle_specifiers(const char *specifier))(va_list, buffer_t *,
							 unsigned char, int, int, unsigned char);


unsigned int print_width(buffer_t *output, unsigned int printed,
			 unsigned char flags, int wid);
unsigned int print_string_width(buffer_t *output,
				unsigned char flags, int wid, int prec, int size);
unsigned int print_neg_width(buffer_t *output, unsigned int printed,
			     unsigned char flags, int wid);


#endif
