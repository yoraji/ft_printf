
#include "ft_printf.h"

int	ft_putstr(char *c)
{
	int i = 0;
	while (c[i])
	{
		ft_putchar(c[i]);
		i++;
	}
	return (i);
}