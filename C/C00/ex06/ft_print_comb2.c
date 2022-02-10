#include <unistd.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void    ft_print_comb2(void)
{
        int     n1;
        int     n2;

        n1 = 0;
        while (n1 < 100)
        {
        n2 = n1 + 1;
                while (n2 < 100)
                {
                        ft_putchar (n1 / 10 + '0');
                        ft_putchar (n1 % 10 + '0');
                        write(1, " ", 1);
                        ft_putchar (n2 / 10 + '0');
                        ft_putchar (n2 % 10 + '0');
                        if ((n1 / 10 != 9) || (n1 % 10 != 8))
                        {
                                ft_putchar (',');
                                ft_putchar (' ');
                        }
                        n2++;
                }
                n1++;
        }
}

//Main
/*
int	main(void)
{
	ft_print_comb2();
	return(0);
}
*/
