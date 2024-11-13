/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoraji <yoraji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:10:33 by yoraji            #+#    #+#             */
/*   Updated: 2024/11/08 13:12:05 by yoraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	_operate(int c, va_list args)
{
	int read;

	read = 0;
	if (c == 'd' || c == 'i')
		read += ft_putnbr(va_arg(args, int));
	else if (c == 'c')
		read += ft_putchar(va_arg(args, int));
	else if (c == 's')
		read += ft_putstr(va_arg(args, char *));
	else if (c == 'x' || c =='X')
		read += ft_hexdecimal(va_arg(args, unsigned int), c);
	else if (c == 'u')
		read += ft_unsigned(va_arg(args, unsigned int));
	else
		read += ft_putchar(c);
	return (read);
}

int	ft_printf(const char *format, ...)
{
	va_list args;
	int read;

	va_start(args, format);
	read = 0;
	while (*format)
	{
		if (*format == '%' && *(format + 1))
		{
			format++;
			read += _operate(*format, args);
		}
		else
		{
			write(1,format,1);
			read++;
		}
		format++;
	}
	va_end(args);
	return (read);
}
#include <stdio.h>
int main()
{
	ft_printf("hello th%cre i want to change s %d %i %u %s\n",'e', 213, 1337,-1,"hello friend");
	printf("hello th%cre i want to change s %d %i %u %s\n",'e', 213, 1337,-1,"hello friend");
	return (0);
}
