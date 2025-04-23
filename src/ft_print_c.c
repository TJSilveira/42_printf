#include "ft_printf.h"

int	ft_print_c(char c, t_format *spec)
{
	// TODO: Implement * option to the function
	int	i;

	i = ft_print_width_left(1, spec);
	write(1, &c, 1);
	i += ft_print_width_right(1, spec);
	return (i + 1);
}