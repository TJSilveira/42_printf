#include "ft_printf.h"

int	ft_print_p(void *str, t_format *spec)
{
	char				array_temp[200];
	int					i;
	unsigned long int	nbr;
	int					size;

	if (!str)
		return (write(1, "(nil)", 5));
	i = 0;
	nbr = (unsigned long int)str;
	while (nbr>=16)
	{
		array_temp[i] = "0123456789abcdef"[nbr % 16];
		nbr = nbr/16;
		i++;
	}
	array_temp[i] = "0123456789abcdef"[nbr % 16];
	size = i + 3;
	size += ft_print_width_left(size, spec);
	write(1, "0x", 2);
	while ((i) >= 0)
		write(1, &array_temp[i--], 1);
	size += ft_print_width_right(size, spec);
	return (size);
}