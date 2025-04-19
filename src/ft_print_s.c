#include "libft.a"
#include <stdarg.h>

int	ft_print_s(char *str)
{
	write(1, str, ft_strlen(str));
	return (ft_strlen(str));
}