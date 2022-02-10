int		ft_strlen(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}

//Main
/*
int		main (void)
{
	char str[] = "Amanda";

	int count = ft_strlen(str);

	printf("%d\n", count);
}
*/
