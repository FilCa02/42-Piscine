//Option 1

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write(1, "P", 1);
	}
	else
	{
		write(1, "N", 1);
	}
}

//Option 2

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_is_negative(int n)
{
        if (n >= 0)
        {
                ft_putchar("P");
        }
        else
        {
		ft_putchar("N");
        }
}

/*
#include <stdio.h>

int	main(void)
{
	printf("Expected Output: P\n");
	ft_is_negative(10);
	printf("\n");
	printf("Expected Output: P\n");
	ft_is_negative(0);
	printf("\n");
	printf("Expected Output: N\n");
	ft_is_negative(-10);
	printf("\n");
	return (0);
}
*/
