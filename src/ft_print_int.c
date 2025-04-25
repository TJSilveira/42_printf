#include "ft_printf.h"

int	ft_print_int(int nbr, t_format *spec)
{
	int counter;
	long int	nbr_temp;

	counter = 0;
	nbr_temp = nbr;
	if (nbr_temp < 0)
	{
		counter++;
		nbr_temp = -nbr_temp;
	}
	while (nbr_temp>9)
	{
		nbr_temp = nbr_temp/10;
		counter++;
	}
	counter++;
	if (spec->precision_set == 1 && nbr == 0)
		return (ft_print_width_left(0, spec));
	counter += ft_print_width_left(counter, spec);
	counter += ft_print_prec(counter, spec);	
	ft_putnbr_fd(nbr, 1);
	counter += ft_print_width_right(counter, spec);
	return (counter);
}