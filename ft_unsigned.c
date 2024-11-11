#include "ft_printf.h"

int	ft_unsigned(unsigned int num)
{
	int count;

	count = 0;
	if (num == 0)
		count += ft_putchar('0');
		return(count);
	if (num > 9)
		ft_unsigned(num / 10);
	ft_putchar((num % 10) + '0');
	return (count);
}