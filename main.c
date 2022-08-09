#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main( void )
{
  char *weekday, *month;

  weekday = "Saturday";
  month = "April";
  _printf( "%s, %s %d, %d\n", weekday, month, 10, 1999 );
  _printf( "f1 = %8.4f f2 = %10.2E x = %#08x i = %d\n",
	  23.45, 3141.5926, 0x1db, -1 );
  return (0);
}
