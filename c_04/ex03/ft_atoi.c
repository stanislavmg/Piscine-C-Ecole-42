/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 20:37:48 by sgoremyk          #+#    #+#             */
/*   Updated: 2023/11/29 16:29:31 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	res;
	int	i;

	i = 0;
	res = 0;
	sign = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res += str[i] - '0';
		if (str[i + 1] >= '0' && str[i + 1] <= '9')
			res *= 10;
		i++;
	}
	if (sign % 2 != 0)
		res *= -1;
	return (res);
}
/*int	main(void)
{
	char *str = "--+-+00000001";

	printf("%d\n",ft_atoi(str));
	return (0);
}*/
