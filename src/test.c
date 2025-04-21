#include <stdio.h>
#include "ft_printf.h"

int	main()
{
	int	counter;

	counter = 0;
	printf("=======[ft_print_p]=======\n\n");
	counter += ft_print_p("This");
	printf("\nCounter: %i\n", counter);

	printf("=======[ft_print_s]=======\n\n");
	counter += ft_print_s("This");
	printf("\nCounter: %i\n", counter);

	printf("=======[ft_print_c]=======\n\n");
	counter += ft_print_c('c');
	printf("\nCounter: %i\n", counter);

	printf("=======[ft_print_int]=======\n\n");
	counter += ft_print_int(-2147483648);
	printf("\nCounter %i\n", counter);

	printf("=======[ft_print_u]=======\n\n");
	counter += ft_print_u(4294967295);
	printf("\nCounter %i\n", counter);

	printf("=======[ft_print_x]=======\n\n");
	counter += ft_print_x(798455);
	printf("\nCounter %i\n", counter);
	printf("Expected: %x\n", 798455);
	
	printf("=======[ft_print_X]=======\n\n");
	counter += ft_print_X(798455);
	printf("\nCounter %i\n", counter);
	printf("Expected: %x\n", 798455);

}