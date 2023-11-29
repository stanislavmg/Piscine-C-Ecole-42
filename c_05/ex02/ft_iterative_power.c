/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:36:34 by sgoremyk          #+#    #+#             */
/*   Updated: 2023/11/29 20:38:23 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	if (power == 0 && nb == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (power > 1)
	{
		nb *= nb;
		power--;
	}
	return (nb);
}

/*int	main(void)
{
	int	num;
	int	power;

	num = 2;
	power = 1;
	printf("%d\n",ft_iterative_power(num, power));

	return (0);
}*/
