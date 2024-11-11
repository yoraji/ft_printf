
#include "ft_printf.h"

int ft_putnbr(int c)
{
	int count;

	count = 0;
	if (c == -2147483648)
	{
		count += ft_putchar('-');
		count += ft_putstr("2147483648");
		return (count);
	}
	if (c == 0)
	{
		return (ft_putchar('0'), 1);
	}
	if (c < 0)
	{
		c = -c;
		count++;
	}
	if (c > 9)
		ft_putnbr(c / 10);
	ft_putchar((c % 10) + '0');
	return (count);
}