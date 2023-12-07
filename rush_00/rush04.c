/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 20:46:50 by sgoremyk          #+#    #+#             */
/*   Updated: 2023/11/19 16:08:56 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define FIRST_LINE 0
#define LAST_LINE 1

void	ft_putchar(char ch);

void	print_line(int width, int line)
{
	int		i;
	char	str[3];

	str[0] = 'A';
	str[1] = 'B';
	str[2] = 'C';
	i = 2;
	if (line == LAST_LINE)
	{
		str[0] = 'C';
		str[2] = 'A';
	}
	ft_putchar(str[0]);
	if (width > 1)
	{
		while (++i <= width)
			ft_putchar(str[1]);
		ft_putchar(str[2]);
	}
	ft_putchar('\n');
}

void	ft_puts(char *s)
{
	int	i;

	i = -1;
	while (++i, s[i])
		write(2, s + i, 1);
}

int	rush(int x, int y)
{
	int		i;
	int		j;

	if (x <= 0 || y <= 0)
	{
		ft_puts("Incorrect argument\n");
		return (1);
	}
	i = 2;
	print_line(x, FIRST_LINE);
	while (++i <= y && y > 2)
	{	
		j = 0;
		while (++j <= x)
		{
			if (j == 1 || j == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
	if (y > 1)
		print_line(x, LAST_LINE);
	return (0);
}
