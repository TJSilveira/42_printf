#include "ft_printf.h"

int	ft_print_u(unsigned int nbr)
{
	int counter;

	counter = 0;
	if (nbr>9)
		counter += ft_print_u(nbr/10);
	ft_putnbr_fd (nbr%10, 1);
	counter++;
	return (counter);
}