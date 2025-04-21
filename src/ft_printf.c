#include "ft_printf.h"

int	ft_print_func(char option)
{
	if (option == 'c')
		return (&ft_print_c);
	else if (option == 's')
		return (&ft_print_s);
	else if (option == 'p')
		return (&ft_print_p);
	else if (option == 'd')
		return ;
	else if (option == 'i')
		return ;
	else if (option == 'u')
		return ;
	else if (option == 'x')
		return ;
	else if (option == 'X')
		return ;
	else if (option == '%')
		return ;
}



int ft_printf(const char *format, ...)
{
	va_list	ap;
	int		res_len;
	int		i;
	
	res_len = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (is_incset(format[i], "cspdiuxX%"))
			{
				res_len += ft_print_func(format[i]);
			}
		}
		
		res_len++;
		i++;
	}
}