/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 13:56:46 by sgoremyk          #+#    #+#             */
/*   Updated: 2023/12/04 16:23:39 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define SIZE 10
#include <unistd.h>

void	print_solve(char (*table)[SIZE]);
void	solve(char (*table)[SIZE], int *count, int x);
int		check_1(char (*table)[SIZE], int x, int y);
int		check_2(char (*table)[SIZE], int x, int y);
int		ft_ten_queens_puzzle(void);

int	ft_ten_queens_puzzle(void)
{
	int		x;
	int		y;
	int		count;
	char	table[SIZE][SIZE];

	x = -1;
	count = 0;
	while (++x < SIZE)
	{
		y = -1;
		while (++y < SIZE)
			table[x][y] = 0;
	}
	solve(table, &count, 0);
	return (count);
}

void	print_solve(char (*table)[SIZE])
{
	int		i;
	int		j;
	char	ch;

	i = -1;
	while (++i < SIZE)
	{
		j = -1;
		while (++j < SIZE)
		{
			if (table[i][j] == 1)
			{
				ch = j + '0';
				write(1, &ch, 1);
			}
		}
	}
	write(1, "\n", 1);
}

void	solve(char (*table)[SIZE], int *count, int x)
{
	int	i;

	if (x == SIZE)
	{
		print_solve(table);
		*count += 1;
	}
	i = 0;
	while (i < SIZE)
	{
		if (check_1(table, x, i) && check_2(table, x, i))
		{
			table[x][i] = 1;
			solve(table, count, x + 1);
			table[x][i] = 0;
		}
		i++;
	}
}

int	check_2(char (*table)[SIZE], int x, int y)
{
	int	i;
	int	j;

	i = x;
	j = y;
	while (i < SIZE && j < SIZE)
	{
		if (table[i][j])
			return (0);
		i++;
		j++;
	}
	i = x;
	j = y;
	while (i >= 0 && j >= 0)
	{
		if (table[i][j])
			return (0);
		i--;
		j--;
	}
	return (1);
}

int	check_1(char (*table)[SIZE], int x, int y)
{
	int	i;
	int	j;

	i = -1;
	while (++i < SIZE)
	{
		if (table[i][y])
			return (0);
	}
	i = x;
	j = y;
	while (i >= 0 && j < SIZE)
	{
		if (table[i][j])
			return (0);
		i--;
		j++;
	}
	while (--y >= 0 && ++x < SIZE)
	{
		if (table[x][y])
			return (0);
	}
	return (1);
}
