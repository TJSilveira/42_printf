#include "ft_printf.h"
#include "libft.h"

void ft_putunsnbr_fd(unsigned int n, int fd)
{
	char	ch;

	if (n >= 10)
		ft_putunsnbr_fd(n / 10, fd);
	ch = n % 10 + '0';
	write(fd, &ch, 1);
}