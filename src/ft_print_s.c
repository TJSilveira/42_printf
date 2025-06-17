#include "ft_printf.h"

int	min(int n1, int n2)
{
	if (n1 <= n2)
		return (n1);
	else
		return (n2);
}

int	ft_print_s(char *str, t_format *spec)
{
	int	i;
	int	len;

	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	len = ft_strlen(str);
	i = ft_print_width_left(len, spec);
	if (spec->precision_set)
	{
		write(1, str, min(spec->precision, len));
		i += ft_print_width_right(len, spec);
		return (min(spec->precision, len) + i);
	}
	else
	{
		write(1, str, len);
		i += ft_print_width_right(len, spec);
		return (len + i);
	}
}
