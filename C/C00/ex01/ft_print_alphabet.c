//Option 1

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		write(1, &alphabet, 1);
		alphabet++;
	}
}

//Option 2

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_print_alphabet(void)
{
        char    alphabet;

        alphabet = 'a';
        while (alphabet <= 'z')
        {
                ft_putchar(alphabet);
                alphabet++;
        }
}

//Main
/*
int	main()
{
	ft_print_alphabet();
	return (0);
}
*/
