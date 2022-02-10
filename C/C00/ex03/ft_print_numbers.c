//Option 1

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	num;

	num = '0';
	while (num <= '9')
	{
		write(1, &num, 1);
		num++;
	}
}

//Option 2

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_print_numbers()
{
        char    num;

        num = '0';
        while (num <= '9')
        {
                ft_putchar(num);
                num++;
        }
}

//Main
/*
int	main(void)
{
	ft_print_numbers();
	return(0);
}
*/
