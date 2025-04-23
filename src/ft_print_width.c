#include "ft_printf.h"

int	ft_print_width_left(int size, t_format *spec)
{
	// TODO: Implement * option to the function
	int	i;

	if (size > spec->width)
		return (0);
	i = 0;
	while (i < spec->width - size && spec->left_just == 0)
	{
		if (spec->zero_pad == 1)
			write(1, "0", 1);
		else
			write(1, " ", 1);
		i++;
	}
	return (i);
}

int	ft_print_width_right(int size, t_format *spec)
{
	// TODO: Implement * option to the function
	int	i;

	if (size > spec->width)
		return (0);
	i = 0;
	while (i < spec->width - size && spec->left_just == 1)
	{
		if (spec->zero_pad == 1)
			write(1, "0", 1);
		else
			write(1, " ", 1);
		i++;
	}
	return (i);
}