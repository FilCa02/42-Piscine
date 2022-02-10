void	ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;

	div = (*a) / (*b);
	mod = (*a) % (*b);
	*a = div;
	*b = mod;
}

//Main
/*
#include <stdio.h>

int		main(void)
{
	int i = 10;
	int j = 5;
	int *a = &i;
	int *b = &j;

	printf("%d /",i);
	printf(" %d\n",j);

	ft_ultimate_div_mod(a, b);
	
	printf("div (*a) = %d\n",*a);
	printf("mod (*b) = %d",*b);

}
*/
