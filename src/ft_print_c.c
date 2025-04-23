#include "ft_printf.h"

int	ft_print_c(char c, t_format *spec)
{
	// TODO: Implement * option to the function
	int	i;

	i = 0;
	while (i < spec->width - 1 && spec->left_just == 0)
	{
		write(1, " ", 1);
		i++;
	}
	write(1, &c, 1);
	while (i < spec->width - 1 && spec->left_just == 1)
	{
		write(1, " ", 1);
		i++;
	}
	return (i + 1);
}