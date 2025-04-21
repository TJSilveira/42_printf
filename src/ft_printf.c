#include "ft_printf.h"

void	*ft_print_func(char option)
{
	if (option == 'c')
		return (&ft_print_c);
	else if (option == 's')
		return (&ft_print_s);
	else if (option == 'p')
		return (&ft_print_p);
	else if (option == 'd' || option == 'i')
		return (&ft_print_int);
	else if (option == 'u')
		return (&ft_print_u);
	else if (option == 'x')
		return (&ft_print_x);
	else if (option == 'X')
		return (&ft_print_X);
	return NULL;
}

int ft_printf(const char *format, ...)
{
	va_list	ap;
	int		res_len;
	int		i;
	
	va_start(ap, format);
	res_len = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (is_incset(format[i], "cspdiuxX"))
				res_len += ((int (*)(void *))ft_print_func(format[i]))(va_arg(ap, void *));
			/*else if(1)
			{
			}*/
			else
				res_len += write(1, &format[i], 1);
		}
		else
			res_len += write(1, &format[i], 1);
		i++;
	}
	return (res_len);
}