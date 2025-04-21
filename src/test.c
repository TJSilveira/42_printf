#include <stdio.h>
#include "ft_printf.h"

int	main()
{
	int		counter_test;
	int		counter_oficial;
	char	*ptr;

	counter_test = 0;
	counter_oficial = 0;
	printf("=======[ft_print_p]=======\n\n");
	ptr = "This";
	counter_test += ft_printf("This %%p: %p\n",ptr);
	counter_oficial += printf("This %%p: %p\n",ptr);
	printf("\nResult: %i\nExpect: %i\n", counter_test, counter_oficial);

	printf("=======[ft_print_s]=======\n\n");
	counter_test += ft_printf("This %%s: %s\n",ptr);
	counter_oficial += printf("This %%s: %s\n",ptr);
	printf("\nResult: %i\nExpect: %i\n", counter_test, counter_oficial);
	
	printf("=======[ft_print_c]=======\n\n");
	counter_test += ft_printf("This %%c: %c\n",'c');
	counter_oficial += printf("This %%c: %c\n",'c');
	printf("\nResult: %i\nExpect: %i\n", counter_test, counter_oficial);

	printf("=======[ft_print_int]=======\n\n");
	counter_test += ft_printf("This %%i: %i\n",59845);
	counter_oficial += printf("This %%i: %i\n",59845);
	printf("\nResult: %i\nExpect: %i\n", counter_test, counter_oficial);
	counter_test += ft_printf("This %%i: %i\n",-2984655);
	counter_oficial += printf("This %%i: %i\n",-2984655);
	printf("\nResult: %i\nExpect: %i\n", counter_test, counter_oficial);

	printf("=======[ft_print_u]=======\n\n");
	counter_test += ft_printf("This %%u: %u\n",2984655);
	counter_oficial += printf("This %%u: %u\n",2984655);
	printf("\nResult: %i\nExpect: %i\n", counter_test, counter_oficial);
	counter_test += ft_printf("This %%u: %u\n",-2984655);
	counter_oficial += printf("This %%u: %u\n",-2984655);
	printf("\nResult: %i\nExpect: %i\n", counter_test, counter_oficial);

	printf("=======[ft_print_x]=======\n\n");
	counter_test += ft_printf("This %%x: %x\n",2984655);
	counter_oficial += printf("This %%x: %x\n",2984655);
	printf("\nResult: %i\nExpect: %i\n", counter_test, counter_oficial);
	
	printf("=======[ft_print_X]=======\n\n");
	counter_test += ft_printf("This %%X: %X\n",2984655);
	counter_oficial += printf("This %%X: %X\n",2984655);
	printf("\nResult: %i\nExpect: %i\n", counter_test, counter_oficial);
}