#include "ft_printf.h"

int	ft_print_X(unsigned int nbr)
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
	while ((i) >= 0)
		write(1, &array_temp[i--], 1);
	return (size);
}