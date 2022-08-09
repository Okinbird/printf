<h1>0x11. C - printf</h1>

<!-- #  0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life

Write a function that produces output according to a format.

*  Prototype: `int _printf(const char *format, ...);`
*  Returns: the number of characters printed (excluding the null byte used to end output to strings)
*  write output to stdout, the standard output stream
*  `format` is a character string. The format string is composed of zero or more directives. See `man 3 printf` for more detail. You need to handle the following conversion specifiers:
   - `c`
   - `s`
   - `%`
*  You don’t have to reproduce the buffer handling of the C library `printf` function
*  You don’t have to handle the flag characters
*  You don’t have to handle field width
*  You don’t have to handle precision
*  You don’t have to handle the length modifiers
-->
<h2>Requirements</h2>
<h3>General</h3>
<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using <code>gcc</code>, using the options <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions should be included in your header file called <code>main.h</code></li>
<li>Don’t forget to push your header file</li>
<li>All your header files should be include guarded</li>
<li>Note that we will not provide the <code>_putchar</code> function for this project</li>
</ul>
<h2>Short description</h2>
<h3><a href="https://github.com/Okinbird/printf/blob/master/0-printf_fun.c">0-printf_fun.c </a>:</h3>
<p> The functions in this file handels the conversion specifiers for characters, strings, percent, integers and binary. This means, they (the functions) can handle these formaters, <code>%c</code>, <code>%s</code>, <code>%%</code>, <code>%i</code>, and <code>%b</code> respectively.</p>
<h3><a href="https://github.com/Okinbird/printf/blob/master/1-printf_fun.c">1-printf_fun.c </a>:</h3>
<p> The functions in this file handels the conversion specifiers for unsigned integers, octals, and hexa decimals. This means, they (the functions) can handle these formaters, <code>%u</code>, <code>%o</code>, (<code>%x</code> and <code>%X</code>) respectively.</p>
<h3><a href="https://github.com/Okinbird/printf/blob/master/2-printf_fun.c">2-printf_fun.c </a>:</h3>
<p> The functions in this file handels the conversion specifiers for pointer variable, reverse strings, and rot13 the strings. This means, they (the functions) can handle these formaters, <code>%p</code>, <code>%r</code>, and <code>%R</code> respectively.</p>
<h3><a href="https://github.com/Okinbird/printf/blob/master/_printf.c">_printf.c </a>:</h3>
<p> The functions in this file handels a function that produces output according to a format.</p>
<h3><a href="https://github.com/Okinbird/printf/blob/master/get_flags.c">get_flags.c </a>:</h3>
<p> The functions in this file handle the flag character for non-custom conversion specifiers. This means, the functions can handle these flags: <code>0</code> , <code>-</code> , <code>+</code> , <code>' '</code> and <code>#</code>.</p>
<h3><a href="https://github.com/Okinbird/printf/blob/master/get_precision.c">get_precision.c </a>:</h3>
<p> The functions in this file calculates the precision for printing.</p>
<h3><a href="https://github.com/Okinbird/printf/blob/master/get_size.c">get_size.c </a>:</h3>
<p> The functions in this file calculates the size of arguments before casting.</p>
<h3><a href="https://github.com/Okinbird/printf/blob/master/handler.c">handler.c </a>:</h3>
<p> The functions in this file handels different data types that passed as an argument.</p>
<h3><a href="https://github.com/Okinbird/printf/blob/master/main.h">main.h </a>:</h3>
<p> This is a header file which has a prototype, struct and macro variable declaration.</p>
<!--<h3><a href="https://github.com/Okinbird/printf/blob/master/utils.c">utils.c </a>:</h3>
<p> The functions in this file handels the conversion specifiers for unsigned integers, octals, and hexa decimals. This means, they (the functions) can handle these formaters, <code>%u</code>, <code>%o</code>, (<code>%x</code> and <code>%X</code>) respectively.</p>-->
<h3><a href="https://github.com/Okinbird/printf/blob/master/write_handler.c">write_handler.c </a>:</h3>
<p> The functions in this file helps to write out the different data types based on the conversion specifiers.</p>
<h3><a href="https://github.com/Okinbird/printf/blob/master/man_3_printf">man_3_printf </a>:</h3>
<p> Manual for <code>_printf()</code> function.</p>
