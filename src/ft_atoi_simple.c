#include "libft.h"

int	ft_atoi_simple(const char *nptr, int *i)
{
	int	total;
	
	total = 0;
	if (!(nptr[*i] >= '0' && nptr[*i] <= '9'))
		return (-1);
	while (nptr[*i] >= '0' && nptr[*i] <= '9')
		total = total * 10 + nptr[(*i)++] - '0';
	return (total);
}
