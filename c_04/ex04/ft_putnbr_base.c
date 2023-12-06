/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:19:58 by sgoremyk          #+#    #+#             */
/*   Updated: 2023/11/29 16:26:23 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	base_check(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[j])
		{
			if ((str[i] == str[j] && i != j) || str[i] == '-'
				|| str[i] == '+' || str[i] < 33 || str[i] == 127)
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char			buf[64];
	unsigned int	num;
	int				len;
	int				i;

	len = base_check(base);
	if (len < 2)
		return ;
	if (nbr == 0)
		write(1, base, 1);
	if (nbr < 0)
	{
		write(1, "-", 1);
		num = -nbr;
	}
	else
		num = nbr;
	i = 63;
	while (num)
	{
		buf[i] = base[num % len];
		num /= len;
		i--;
	}
	write(1, buf + i + 1, 63 - i);
}

/*int	main(void)
{
	int	a;
	char	*base = "0123456789ABCDEF";

	a = -1234567892;
	ft_putnbr_base(a, base);
	return (0);
}*/
