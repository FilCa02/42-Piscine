void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

//Main
/*
#include <stdio.h>

int		main(void)
{
	int i  = 7;
	int j  = 3;
	int *a = &i;
	int *b = &j;

	ft_swap(a, b);
	printf("i should be 7 and it is : %u\n",*a);
	printf("j should be 3 and it is : %u",*b);
}
*/
