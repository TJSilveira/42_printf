#include "ft_printf.h"

int	int_bonus_flags(t_format *spec)
{
	int	counter;

	counter = 0;
	if (spec->sign == 1)
	{
		ft_putstr_fd("+", 1);
		counter += 1;
	}
	else if (spec->sign == -1)
	{
		ft_putstr_fd("-", 1);
		counter += 1;
	}
	else if (spec->space == 1)
	{
		ft_putstr_fd(" ", 1);
		counter += 1;
	}
	return(counter);
}

void	ft_print_int_aux(unsigned int nbr, t_format *spec, int c_nbr, int *c_total)
{
	*c_total += int_bonus_flags(spec);
	*c_total += ft_print_width_left(*c_total, spec);
	*c_total += ft_print_prec(c_nbr, spec);
	ft_putunsnbr_fd(nbr, 1);
	*c_total += ft_print_width_right(*c_total, spec);
}

int	ft_print_int(int nbr, t_format *spec)
{
	int				counter_total;
	int				counter_nbr;
	long int		nbr_temp;
	unsigned int	nbr_final;

	counter_total = 0;
	nbr_temp = nbr;
	nbr_final = (nbr < 0) * (-nbr) + (nbr >= 0) * (nbr);
	if (nbr_temp < 0)
	{
		spec->sign = -1;
		nbr_temp = -nbr_temp;
	}
	while (nbr_temp > 9)
	{
		nbr_temp = nbr_temp / 10;
		counter_total++;
	}
	counter_total++;
	counter_nbr = counter_total;
	if (spec->precision_set == 1 && spec->precision == 0 && nbr == 0)
		return (ft_print_width_left(0, spec));
	ft_print_int_aux(nbr_final, spec, counter_nbr, &counter_total);
	return (counter_total);
}
