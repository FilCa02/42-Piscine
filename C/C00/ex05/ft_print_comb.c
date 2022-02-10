//Option 1

#include <unistd.h>

void	ft_3num(char n1, char n2, char n3)
{
	write(1, &n1, 1);
	write(1, &n2, 1);
	write(1, &n3, 1);
	if (n1 != '7' || n2 != '8' || n3 != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char n1;
	char n2;
	char n3;

	n1 = '0';
	while (n1 <= '7')
	{
		n2 = n1 + 1;
		while (n2 <= '8')
		{
			n3 = n2 + 1;
			while (n3 <= '9')
			{
				ft_3num(n1, n2, n3);
				n3++;
			}
			n2++;
		}
		n1++;
	}
}

//Option 2

#include <unistd.h>

void    ft_print_comb(void)
{
        int     n1;
        int     n2;
        int     n3;

        n1 = '0';
        while (n1 <= '7')
        {
                n2 = n1 + 1;
                while (n2 <= '8')
                {
                        n3 = n2 + 1;
                        while (n3 <= '9')
                        {
                                write (1, &n1, 1);
                                write (1, &n2, 1);
                                write (1, &n3, 1);
                                if (n1 != '7')
                                        write (1, ", ", 2);
                                n3++;
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
	ft_print_comb();
	return (0);
}
*/
