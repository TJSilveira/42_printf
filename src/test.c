#include <stdio.h>
#include "ft_printf.h"

int	main()
{
	int	counter;

	counter = 0;
	counter += ft_print_p("This");
	write(1, "\n", 1);
	counter += ft_print_s("This");
	write(1, "\n", 1);

}