/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:01:42 by sgoremyk          #+#    #+#             */
/*   Updated: 2023/11/19 18:44:11 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n);
void	int_check(int *pn);

/*int		main(void)
{
	ft_putnbr(2147483647);
	return 0;
}*/

void	int_check(int *pn)
{
	int		i;
	char	*min;

	min = "-2147483648";
	i = -1;
	if (*pn == -2147483648)
	{
		while (++i, i < 11)
			write(1, min + i, 1);
		*pn = 0;
	}
	if (*pn < 0)
	{
		*pn = -(*pn);
		write(1, "-", 1);
	}
}

void	ft_putnbr(int n)
{
	char	number [10];
	int		i;
	int		*pn;

	i = -1;
	pn = &n;
	int_check(pn);
	while (++i, n)
	{
		number[i] = ((char)(n % 10) + '0');
		n = n / 10;
	}
	i = 10;
	while (--i, i >= 0)
		write(1, number + i, 1);
}
