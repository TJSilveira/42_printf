#include "ft_printf.h"

int	ft_print_c(char c, t_format *spec)
{
	int	i;

	// printf("Width: %i\n", spec->width);
	i = ft_print_width_left_cs(1, spec);
	write(1, &c, 1);
	i += ft_print_width_right_cs(1, spec);
	return (i + 1);
}
