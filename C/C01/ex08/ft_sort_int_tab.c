void	ft_swap(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

void	quicksort(int arr[], int l, int r)
{
	int piv;
	int split;
	int i;

	if (l >= r)
		return ;
	piv = arr[r];
	split = l;
	i = l;
	while (i <= r)
	{
		if (arr[i] <= piv)
		{
			ft_swap(&arr[split], &arr[i]);
			split++;
		}
		i++;
	}
	quicksort(arr, l, split - 2);
	quicksort(arr, split, r);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int l;
	int r;

	l = 0;
	r = size - 1;
	quicksort(tab, l, r);
}

//Main
/*
#include <stdio.h>

void putarr(int arr[], int size)
{
    for (int i = 0; i < (size -1); i++)
        printf("%d, ", arr[i]);
    printf("%d\n", arr[size - 1]);
}

int		main (void)
{
	int tab[] = {10, 7, 8, 9, 1, 5};
	int size;

	size = 6;

	printf("Original: ");
	putarr(tab, size);

	ft_sort_int_tab(tab, size);

	printf("Modified: ");
	putarr(tab, size);
}
*/
