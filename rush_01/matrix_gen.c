int	matrix_gen(char **matr)
{
	int	i;
	int	j;
	int k;
	int l;
	char	*array[4];

	i = 0;
	while (matr[0][i])
	{
		j = 0;
		while (matr[1][j])
		{
			k = 0;
			while (matr[2][k])
			{
				l = 0;
				while (matr[3][l])
				{
					array[0] = matr[0][i];
					array[1] = matr[1][j];
					array[2] = matr[2][k];
					array[3] = matr[3][l];
					l++;
				}
				print_arr(array);
				k++;
			}
			j++;
		}
		i++;
	}
	return (0);
}
void	print_arr(char *arr[])
{
	int	i;
	i = 0;
	while (i < 4)
	{
		write(1,*(arr+i), 4);
		write(1,"\n", 1);
		i++;
	}	
	write(1,"\n", 1);
}
