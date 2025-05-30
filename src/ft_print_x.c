#include "ft_printf.h"

int	x_bonus_flags(t_format *spec)
{
	int	counter;

	counter = 0;
	if (spec->hash == 1)
	{
		ft_putstr_fd("0x", 1);
		counter += 2;
	}
	return (counter);
}

int	ft_print_x(unsigned int nbr, t_format *spec)
{
	char	array_temp[50];
	int		i;
	int		size_total;
	int		size_nbr;

	i = 0;
	while (nbr >= 16)
	{
		array_temp[i] = "0123456789abcdef"[nbr % 16];
		nbr = nbr / 16;
		i++;
	}
	array_temp[i] = "0123456789abcdef"[nbr % 16];
	size_total = i + 1;
	if (spec->precision_set == 1 && nbr == 0)
		return (ft_print_width_left(0, spec));
	size_nbr = size_total;
	size_total += ft_print_width_left(size_total, spec);
	size_total += x_bonus_flags(spec);
	size_total += ft_print_prec(size_nbr, spec);
	while ((i) >= 0)
		write(1, &array_temp[i--], 1);
	size_total += ft_print_width_right(size_total, spec);
	return (size_total);
}
