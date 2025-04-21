#ifndef FT_PRINTF_H
#define FT_PRINTF_H
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"


int	ft_print_c(char c);
int	ft_print_s(char *str);
int	ft_print_p(void *str);
int	ft_print_int(int nbr);
int	ft_print_u(unsigned int nbr);

#endif