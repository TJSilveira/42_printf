#include "ft_printf.h"

int	ft_print_X(unsigned int nbr, t_format *spec)
{
	char	array_temp[50];
	int		i;
	int		size;

	i = 0;
	while (nbr>=16)
	{
		array_temp[i] = "0123456789ABCDEF"[nbr % 16];
		nbr = nbr/16;
		i++;
	}
	array_temp[i] = "0123456789ABCDEF"[nbr % 16];
	size = i + 1;
	printf("This is the size: %i\n", size);
	printf("This is the precision: %i\n", spec->precision);
	printf("This is the precision set: %i\n", spec->precision_set);
	if (spec->precision_set == 1 && nbr == 0)
		return (ft_print_width_left(0, spec));
	size += ft_print_width_left(size, spec);
	size += ft_print_prec(size, spec);
	while ((i) >= 0)
		write(1, &array_temp[i--], 1);
	size += ft_print_width_right(size, spec);
	return (size);
}