#include "ft_printf.h"

int count_hex(unsigned int c)
{
	int	count;

	if (c == 0)
		return 1;
	count = 0;
	while (c > 0)
	{
		count++;
		c /= 16;
	}
	return (count);
}

int	ft_hexdecimal(unsigned int num,int c)
{
	char base[17] = "0123456789abcdef";
	char BASE[17] = "0123456789abcdef";
	char *ptr;
	int count; int i = 0;

	count = count_hex(num);
	ptr = malloc(count + 1);
	if (!ptr)
		return 0;
	ptr[count] = '\0';
	if (num == 0)
	{
		ptr[0] = '0';
		return 1;
	}
	while (num > 0)
	{
		if (c == 'x')
		{
			ptr[--count] = base[num % 16];
			i++;
		}else{
			ptr[--count] = BASE[num % 16];
			i++;
		}
		c /= 16;
	}
	return (i);
}
