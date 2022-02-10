//Option 1

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alphabet;

	alphabet = 'z';
	while (alphabet <= 'a')
	{
		write(1, &alphabet, 1);
		alphabet--;
	}
}

//Option 2

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_print_reverse_alphabet(void)
{
        char    alphabet;

        alphabet = 'z';
        while (alphabet <= 'a')
        {
                ft_putchar(alphabet);
                alphabet--;
        }
}

//Main
/*
int	main()
{
	ft_print_reverse_alphabet();
	return (0);
}
*/
