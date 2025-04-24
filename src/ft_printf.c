#include "ft_printf.h"

void	*ft_print_func(t_format *spec)
{
	if (spec->specifier == 'c')
		return (&ft_print_c);
	else if (spec->specifier == 's')
		return (&ft_print_s);
	else if (spec->specifier == 'p')
		return (&ft_print_p);
	else if (spec->specifier == 'd' || spec->specifier == 'i')
		return (&ft_print_int);
	else if (spec->specifier == 'u')
		return (&ft_print_u);
	else if (spec->specifier == 'x')
		return (&ft_print_x);
	else if (spec->specifier == 'X')
		return (&ft_print_X);
	return NULL;
}

int	add_flg(const char *str, int *i, t_format *format)
{
	int	start;

	start = *i;
	while (str[*i] != ' ' && str[*i] != 0)
	{
		// printf("Zero pad: %i, Left_just: %i, Width: %i, Prec set: %i, Prec: %i, Spec: %i\n\n", format->zero_pad, format->left_just, format->width, format->precision_set, format->precision, format->specifier);
		if (str[*i] == '0' && start == *i)
		{
			format->zero_pad = 1;
			(*i)++;
		}
		else if (str[*i] == '-' && start == *i)
		{
			format->left_just = 1;
			(*i)++;
		}
		else if (ft_isdigit(str[*i]) && format->precision_set == 0)
		{
			format->width = ft_atoi_simple(str, i);
		}
		else if (str[*i] == '.')
		{
			format->precision_set = 1;
			(*i)++;
		}
		else if (ft_isdigit(str[*i]) && format->precision_set == 1)
		{
			format->precision = ft_atoi_simple(str, i);
		}
		else if (is_incset(str[*i], "cspdiuxX"))
		{
			format->specifier = str[*i];
			return (1);
		}
		else
			return (0);
	}
	return (0);
}

void	set_spec_zero(t_format	*spec)
{
	spec->left_just = 0;
	spec->precision = 0;
	spec->precision_set = 0;
	spec->specifier = 0;
	spec->width = 0;
	spec->zero_pad = 0;
}

int ft_printf(const char *format, ...)
{
	va_list	ap;
	int		res_len;
	int		i;
	t_format	spec;
	
	va_start(ap, format);
	res_len = 0;
	i = 0;
	set_spec_zero(&spec);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (add_flg(format, &i, &spec))
				res_len += ((int (*)(void *, t_format *))ft_print_func(&spec))(va_arg(ap, void *), &spec);
			else
				res_len += write(1, &format[i], 1);
		}
		else
			res_len += write(1, &format[i], 1);
		i++;
	}
	return (res_len);
}