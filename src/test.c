#include <stdio.h>
#include "ft_printf.h"

int	main()
{
	int		counter_test;
	int		counter_oficial;
	char	*ptr;
	
	ptr = "This";
	/*
	printf("%0x\n%x\n", 0, 486);
	printf("%.00000005d\n%d\n", 486, 486);
	printf("%.5d\n%d\n", 486, 486);
	printf("%-.5d\n%d\n", 0, 486);
	printf("%6.5d\n%d\n", 0, 486);
	printf("%30p\n%p\n", ptr, ptr);
	printf("%15c\n%c\n", 'c', 'c');
	
	printf("=======[FLAG SECTION '-0.*']=======\n\n");
	printf("=======[Numbers - int]=======\n\n");
	counter_oficial = 0;
	counter_oficial += printf("This %%5d: %5d\n",2984655);
	printf("Result: %i\n", counter_oficial);
	counter_oficial = 0;
	counter_oficial += printf("This %%5d: %5d\n",298);
	printf("Result: %i\n", counter_oficial);
	counter_oficial = 0;
	counter_oficial += printf("This %%5d: %5d\n",0);
	printf("Result: %i\n", counter_oficial);

	printf("=======[Numbers - s]=======\n\n");
	counter_oficial = 0;
	counter_oficial += printf("This %%5s: %5s\n","2984655");
	printf("Result: %i\n", counter_oficial);
	counter_oficial = 0;
	counter_oficial += printf("This %%5s: %5s\n","298");
	printf("Result: %i\n", counter_oficial);
	counter_oficial = 0;
	counter_oficial += printf("This %%5s: %5s\n","0");
	printf("Result: %i\n", counter_oficial);

	printf("=======[Numbers + Left justification - int]=======\n\n");
	counter_oficial = 0;
	counter_oficial += printf("This %%-5d: %-5d\n",2984655);
	printf("Result: %i\n", counter_oficial);
	counter_oficial = 0;
	counter_oficial += printf("This %%-5d: %-5d\n",298);
	printf("Result: %i\n", counter_oficial);
	counter_oficial = 0;
	counter_oficial += printf("This %%-5d: %-5d\n",0);
	printf("Result: %i\n", counter_oficial);

	printf("=======[Numbers + zeros - int]=======\n\n");
	counter_oficial = 0;
	counter_oficial += printf("This %%05d: %05d\n",2984655);
	printf("Result: %i\n", counter_oficial);
	counter_oficial = 0;
	counter_oficial += printf("This %%05d: %05d\n",298);
	printf("Result: %i\n", counter_oficial);
	counter_oficial = 0;
	counter_oficial += printf("This %%05d: %05d\n",0);
	printf("Result: %i\n", counter_oficial);

	printf("=======[zeros - int]=======\n\n");
	counter_oficial = 0;
	counter_oficial += printf("This %%0d: %0d\n",2984655);
	printf("Result: %i\n", counter_oficial);
	counter_oficial = 0;
	counter_oficial += printf("This %%0d: %0d\n",298);
	printf("Result: %i\n", counter_oficial);
	counter_oficial = 0;
	counter_oficial += printf("This %%0d: %0d\n",0);
	printf("Result: %i\n", counter_oficial);

	printf("=======[. - int]=======\n\n");
	counter_oficial = 0;
	counter_oficial += printf("This %%.d: %.d\n",2984655);
	printf("Result: %i\n", counter_oficial);
	counter_oficial = 0;
	counter_oficial += printf("This %%.d: %.d\n",298);
	printf("Result: %i\n", counter_oficial);
	counter_oficial = 0;
	counter_oficial += printf("This %%.d: %.d\n",0);
	printf("Result: %i\n", counter_oficial);

	printf("=======[.nbr - int]=======\n\n");
	counter_oficial = 0;
	counter_oficial += printf("This %%.5d: %.5d\n",2984655);
	printf("Result: %i\n", counter_oficial);
	counter_oficial = 0;
	counter_oficial += printf("This %%.5d: %.5d\n",298);
	printf("Result: %i\n", counter_oficial);
	counter_oficial = 0;
	counter_oficial += printf("This %%.5d: %.5d\n",0);
	printf("Result: %i\n", counter_oficial);

	printf("=======[nbr.nbr - int]=======\n\n");
	counter_oficial = 0;
	counter_oficial += printf("This %%5.5d: %5.5d\n",2984655);
	printf("Result: %i\n", counter_oficial);
	counter_oficial = 0;
	counter_oficial += printf("This %%5.5d: %5.5d\n",298);
	printf("Result: %i\n", counter_oficial);
	counter_oficial = 0;
	counter_oficial += printf("This %%5.5d: %5.5d\n",0);
	printf("Result: %i\n", counter_oficial);

	printf("=======[nbr. - int]=======\n\n");
	counter_oficial = 0;
	counter_oficial += printf("This %%5.d: %5.d\n",2984655);
	printf("Result: %i\n", counter_oficial);
	counter_oficial = 0;
	counter_oficial += printf("This %%5.d: %5.d\n",298);
	printf("Result: %i\n", counter_oficial);
	counter_oficial = 0;
	counter_oficial += printf("This %%5.d: %5.d\n",0);
	printf("Result: %i\n", counter_oficial);

	printf("=======[.nbr - s]=======\n\n");
	counter_oficial = 0;
	counter_oficial += printf("This %%.5s: %.5s\n","2984655");
	printf("Result: %i\n", counter_oficial);
	counter_oficial = 0;
	counter_oficial += printf("This %%.5s: %.5s\n","298");
	printf("Result: %i\n", counter_oficial);
	counter_oficial = 0;
	counter_oficial += printf("This %%.5s: %.5s\n","0");
	printf("Result: %i\n", counter_oficial);

	printf("=======[* - int]=======\n\n");
	counter_oficial = 0;
	counter_oficial += printf("This %%.5s: %.5s\n","2984655");
	printf("Result: %i\n", counter_oficial);
	counter_oficial = 0;
	counter_oficial += printf("This %%.5s: %.5s\n","298");
	printf("Result: %i\n", counter_oficial);
	counter_oficial = 0;
	counter_oficial += printf("This %%.5s: %.5s\n","0");
	printf("Result: %i\n", counter_oficial);*/

	/* All test that were successful*/
	
	printf("=======[BASIC FUNCTIONALITIES]=======\n\n");
	counter_test = 0;
	counter_oficial = 0;
	/*printf("=======[ft_print_p]=======\n\n");
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
	printf("\nResult: %i\nExpect: %i\n", counter_test, counter_oficial);*/

	printf("=======[ft_print_c]=======\n\n");
	counter_test += ft_printf("This %%25c: %25c\n",'c');
	counter_oficial += printf("This %%25c: %25c\n",'c');
	printf("\nResult: %i\nExpect: %i\n", counter_test, counter_oficial);
	counter_test += ft_printf("This %%-5c: %-5c\n",'c');
	counter_oficial += printf("This %%-5c: %-5c\n",'c');
	printf("\nResult: %i\nExpect: %i\n", counter_test, counter_oficial);

	printf("=======[ft_print_s]=======\n\n");
	counter_test += ft_printf("This %%5s: %5s\n","This");
	counter_oficial += printf("This %%5s: %5s\n","This");
	printf("\nResult: %i\nExpect: %i\n", counter_test, counter_oficial);
	counter_test += ft_printf("This %%5s: %5s\n","Another string");
	counter_oficial += printf("This %%5s: %5s\n","Another string");
	printf("\nResult: %i\nExpect: %i\n", counter_test, counter_oficial);
	counter_test += ft_printf("This %%-5s: %-5s\n","This");
	counter_oficial += printf("This %%-5s: %-5s\n","This");
	printf("\nResult: %i\nExpect: %i\n", counter_test, counter_oficial);
	counter_test += ft_printf("This %%-5s: %-5s\n","Another string");
	counter_oficial += printf("This %%-5s: %-5s\n","Another string");
	printf("\nResult: %i\nExpect: %i\n", counter_test, counter_oficial);

	printf("=======[ft_print_int]=======\n\n");
	counter_test += ft_printf("This %%25d: %25d\n",257);
	counter_oficial += printf("This %%25d: %25d\n",257);
	printf("\nResult: %i\nExpect: %i\n", counter_test, counter_oficial);
	counter_test += ft_printf("This %%5d: %5d\n",2578787);
	counter_oficial += printf("This %%5d: %5d\n",2578787);
	printf("\nResult: %i\nExpect: %i\n", counter_test, counter_oficial);
	counter_test += ft_printf("This %%-5d: %-5d\n",257);
	counter_oficial += printf("This %%-5d: %-5d\n",257);
	printf("\nResult: %i\nExpect: %i\n", counter_test, counter_oficial);
	counter_test += ft_printf("This %%-5d: %-5d\n",2578787);
	counter_oficial += printf("This %%-5d: %-5d\n",2578787);
	printf("\nResult: %i\nExpect: %i\n", counter_test, counter_oficial);

	printf("=======[ft_print_p]=======\n\n");
	counter_test += ft_printf("This %%25p: %25p\n",ptr);
	counter_oficial += printf("This %%25p: %25p\n",ptr);
	printf("\nResult: %i\nExpect: %i\n", counter_test, counter_oficial);
	counter_test += ft_printf("This %%5p: %5p\n",ptr);
	counter_oficial += printf("This %%5p: %5p\n",ptr);
	printf("\nResult: %i\nExpect: %i\n", counter_test, counter_oficial);
	counter_test += ft_printf("This %%-25p: %-25p\n",ptr);
	counter_oficial += printf("This %%-25p: %-25p\n",ptr);
	printf("\nResult: %i\nExpect: %i\n", counter_test, counter_oficial);
	counter_test += ft_printf("This %%-5p: %-5p\n",ptr);
	counter_oficial += printf("This %%-5p: %-5p\n",ptr);
	printf("\nResult: %i\nExpect: %i\n", counter_test, counter_oficial);

	printf("=======[ft_print_u]=======\n\n");
	counter_test += ft_printf("This %%25u: %25u\n",213548);
	counter_oficial += printf("This %%25u: %25u\n",213548);
	printf("\nResult: %i\nExpect: %i\n", counter_test, counter_oficial);
	counter_test += ft_printf("This %%5u: %5u\n",213548);
	counter_oficial += printf("This %%5u: %5u\n",213548);
	printf("\nResult: %i\nExpect: %i\n", counter_test, counter_oficial);
	counter_test += ft_printf("This %%-25u: %-25u\n",213548);
	counter_oficial += printf("This %%-25u: %-25u\n",213548);
	printf("\nResult: %i\nExpect: %i\n", counter_test, counter_oficial);
	counter_test += ft_printf("This %%-5u: %-5u\n",213548);
	counter_oficial += printf("This %%-5u: %-5u\n",213548);
	printf("\nResult: %i\nExpect: %i\n", counter_test, counter_oficial);

	printf("=======[ft_print_x]=======\n\n");
	counter_test += ft_printf("This %%25x: %25x\n",21354489);
	counter_oficial += printf("This %%25x: %25x\n",21354489);
	printf("\nResult: %i\nExpect: %i\n", counter_test, counter_oficial);
	counter_test += ft_printf("This %%5x: %5x\n",21354489);
	counter_oficial += printf("This %%5x: %5x\n",21354489);
	printf("\nResult: %i\nExpect: %i\n", counter_test, counter_oficial);
	counter_test += ft_printf("This %%-25x: %-25x\n",21354489);
	counter_oficial += printf("This %%-25x: %-25x\n",21354489);
	printf("\nResult: %i\nExpect: %i\n", counter_test, counter_oficial);
	counter_test += ft_printf("This %%-5x: %-5x\n",21354489);
	counter_oficial += printf("This %%-5x: %-5x\n",21354489);
	printf("\nResult: %i\nExpect: %i\n", counter_test, counter_oficial);

	printf("=======[ft_print_X]=======\n\n");
	counter_test += ft_printf("This %%25X: %25X\n",21354489);
	counter_oficial += printf("This %%25X: %25X\n",21354489);
	printf("\nResult: %i\nExpect: %i\n", counter_test, counter_oficial);
	counter_test += ft_printf("This %%5X: %5X\n",21354489);
	counter_oficial += printf("This %%5X: %5X\n",21354489);
	printf("\nResult: %i\nExpect: %i\n", counter_test, counter_oficial);
	counter_test += ft_printf("This %%-25X: %-25X\n",21354489);
	counter_oficial += printf("This %%-25X: %-25X\n",21354489);
	printf("\nResult: %i\nExpect: %i\n", counter_test, counter_oficial);
	counter_test += ft_printf("This %%-5X: %-5X\n",21354489);
	counter_oficial += printf("This %%-5X: %-5X\n",21354489);
	printf("\nResult: %i\nExpect: %i\n", counter_test, counter_oficial);
}