#include "ft_printf.h"

int	ft_print_s(char *str, t_format *spec)
{
	// TODO: Implement * option to the function
	int	i;
	int	len;

	len = ft_strlen(str);
	i = ft_print_width_left(len, spec);
	write(1, str, len);
	i += ft_print_width_right(len, spec);
	return (len + i);
}