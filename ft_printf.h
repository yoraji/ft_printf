#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int ft_putstr(char *str);
int ft_putchar(char c);
int ft_hexdecimal(unsigned int num, int format);
int ft_putnbr(int num);
int ft_point(void *ptr);
int	ft_unsigned(unsigned int num);

#endif
