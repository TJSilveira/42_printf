#include "ft_printf.h"

int	ft_print_p(void *str)
{
	char				array_temp[50];
	int					i;
	unsigned long int	nbr;
	char				*base;

	if (!str)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	i = 0;
	base = "0123456789abcedf";
	nbr = (unsigned long int)str;
	while (nbr>=16)
	{
		array_temp[i] = base[nbr % 16];
		nbr = nbr/16;
		i++;
	}
	array_temp[i] = base[nbr % 16];
	nbr = i + 3;
	write(1, "0x", 2);
	while ((i) >= 0)
		write(1, &array_temp[i--], 1);
	return (nbr);
}