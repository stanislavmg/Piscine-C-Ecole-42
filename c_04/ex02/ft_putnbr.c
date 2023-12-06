/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:57:32 by sgoremyk          #+#    #+#             */
/*   Updated: 2023/11/29 15:40:05 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_putnbr(int nb)
{
	unsigned int	i;
	char			buf[10];
	int				j;

	j = 9;
	i = 0;
	if (nb == 0)
		write(1, "0", 1);
	else if (nb < 0)
	{
		write(1, "-", 1);
		i = -nb;
	}
	else
		i = nb;
	while (i)
	{
		buf[j] = i % 10 + '0';
		i /= 10;
		j--;
	}
	write(1, buf + j + 1, 9 - j);
}

/*int	main(void)
{
	int	i;

	i = 0;
	printf("%d\n", i);
	ft_putnbr(i);
	return (0);
}*/
