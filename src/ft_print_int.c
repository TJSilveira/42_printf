#include "ft_printf.h"

int	ft_print_int(int nbr)
{
	int counter;

	ft_putnbr_fd(nbr, 1);
	counter = 0;
	if (nbr == -2147483648)
		return (11);
	if (nbr < 0)
	{
		counter++;
		nbr = -nbr;
	}
	while (nbr>9)
	{
		nbr = nbr/10;
		counter++;
	}
	counter++;
	return (counter);
}