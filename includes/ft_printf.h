#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include "libft.h"
# define BIGGER(x,y) ((x<=y)*y+(x>y)*x)

typedef struct s_format
{
	int		left_just;
	int		zero_pad;
	int		width;
	int		precision;
	int		precision_set;
	char	specifier;
	int		space;
	int		sign;
	int		hash;
}	t_format;

int		ft_printf(const char *format, ...);
int		ft_print_c(char c, t_format *spec);
int		ft_print_s(char *str, t_format *spec);
int		ft_print_p(void *str, t_format *spec);
int		ft_print_int(int nbr, t_format *spec);
int		ft_print_u(unsigned int nbr, t_format *spec);
int		ft_print_x(unsigned int nbr, t_format *spec);
int		ft_print_X(unsigned int nbr, t_format *spec);
int		ft_atoi_simple(const char *nptr, int *i);
int		add_flg(const char *str, int *i, t_format *format, va_list *ap);
int		ft_print_width_left(int size, t_format *spec);
int		ft_print_width_right(int size, t_format *spec);
int		ft_print_prec(int size, t_format *spec);
int		x_bonus_flags(t_format *spec);
void	ft_putunsnbr_fd(unsigned int n, int fd);
void	ft_print_int_aux(unsigned int nbr, t_format *spec, int c_nbr, int *c_total);
int		add_flg_aux_1(const char *str, int *i, t_format *format);
int		add_flg_aux_2(const char *str, int *i, t_format *format, va_list *ap);
void	*ft_print_func(t_format *spec);
int		add_flg_aux_1(const char *str, int *i, t_format *format);
int		add_flg_aux_2(const char *str, int *i, t_format *format, va_list *ap);
int		add_flg(const char *str, int *i, t_format *format, va_list *ap);

#endif