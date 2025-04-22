#ifndef FT_PRINTF_H
#define FT_PRINTF_H
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

typedef struct s_format
{
	int		left_just;
	int		zero_pad;
	int		width;
	int		precision;
	int		precision_set;
	char	specifier;
}	t_format;

int ft_printf(const char *format, ...);
int	ft_print_c(char c, t_format *spec);
int	ft_print_s(char *str);
int	ft_print_p(void *str);
int	ft_print_int(int nbr);
int	ft_print_u(unsigned int nbr);
int	ft_print_x(unsigned int nbr);
int	ft_print_X(unsigned int nbr);
int	ft_atoi_simple(const char *nptr, int *i);
int	ft_atoi_check(const char *nptr, int *i);
int	add_flg(const char *str, int *i, t_format *format);

#endif