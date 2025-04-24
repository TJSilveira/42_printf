#include "ft_printf.h"

int	ft_print_u(unsigned int nbr, t_format *spec)
{
	int counter;
	unsigned int	nbr_temp;

	counter = 0;
	nbr_temp = nbr;
	while (nbr_temp>9)
	{
		nbr_temp = nbr_temp/10;
		counter++;
	}
	counter++;
	counter += ft_print_width_left(counter, spec);
	ft_putnbr_fd (nbr, 1);
	counter += ft_print_width_right(counter, spec);
	return (counter);
}