#include "ft_printf.h"

int	ft_print_s(char *str, t_format *spec)
{
	// TODO: Implement * option to the function
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(str);
	while (i < spec->width - len && spec->left_just == 0)
	{
		write(1, " ", 1);
		i++;
	}
	write(1, str, len);
	while (i < spec->width - len && spec->left_just == 1)
	{
		write(1, " ", 1);
		i++;
	}
	return (len + i);
}