#ifndef _VARIADIC_H_
#define _VARIADIC_H_

#include <stdio.h>
#include <sdtarg.h>

/*int _putchar(char c);*/
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
