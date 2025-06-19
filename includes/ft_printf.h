/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilveir <tsilveir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 16:37:36 by tsilveir          #+#    #+#             */
/*   Updated: 2025/06/19 16:37:37 by tsilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include "libft.h"

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

/* ft_printf.c */
int		ft_printf(const char *format, ...);

/* ft_print_c.c */
int		ft_print_c(char c, t_format *spec);

/* ft_print_s.c */
int		ft_print_s(char *str, t_format *spec);

/* ft_print_p.c */
int		ft_print_p(void *str, t_format *spec);

/* ft_print_int.c */
int		int_bonus_flags(t_format *spec);
int		ft_print_int(int nbr, t_format *spec);
void	ft_print_int_aux(size_t nbr, t_format *spec, int c_nbr, int *c_total);

/* ft_print_u.c */
int		ft_print_u(unsigned int nbr, t_format *spec);

/* ft_print_x.c */
int		ft_print_x(unsigned int nbr, t_format *spec);
int		x_bonus_flags(t_format *spec, unsigned int nbr, char option);

/* ft_print_X.c */
int		ft_print_bigx(unsigned int nbr, t_format *spec);

/* ft_atoi_simple.c */
int		ft_atoi_simple(const char *nptr, int *i);
int		add_flg(const char *str, int *i, t_format *format, va_list *ap);

/* ft_print_width.c */
int		big(int i1, int i2);
void	print_filler(int *i, t_format *a);
int		ft_print_width_left(int size, t_format *spec);
int		ft_print_width_right(int size, t_format *spec);
int		ft_print_prec(int size, t_format *spec);

/* ft_print_width_cs.c */
int		ft_print_width_left_cs(int size, t_format *a);
int		ft_print_width_right_cs(int size, t_format *spec);

void	ft_putunsnbr_fd(unsigned int n, int fd);
int		add_flg_aux_1(const char *str, int *i, t_format *format);
int		add_flg_aux_2(const char *str, int *i, t_format *format, va_list *ap);

/* ft_flags.c */
void	*ft_print_func(t_format *spec);
int		add_flg_aux_1(const char *str, int *i, t_format *format);
int		add_flg_aux_2(const char *str, int *i, t_format *format, va_list *ap);
int		add_flg(const char *str, int *i, t_format *format, va_list *ap);

#endif
