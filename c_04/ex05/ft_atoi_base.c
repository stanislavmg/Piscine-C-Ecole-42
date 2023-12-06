/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:46:45 by sgoremyk          #+#    #+#             */
/*   Updated: 2023/11/29 16:31:35 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

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

int	check(char str, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (str == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	check_sign(char *str, int *sign)
{
	int	i;

	i = 0;
	*sign = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			*sign += 1;
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	res;
	int	len;
	int	a;
	int	i;

	res = 0;
	len = base_check(base);
	if (len < 2)
		return (0);
	i = check_sign(str, &sign);
	while (str[i])
	{
		a = check(str[i], base);
		if (a == -1)
			break ;
		res += a;
		if ((check(str[i + 1], base) != -1))
			res *= len;
		i++;
	}
	if (sign % 2 != 0)
		res *= -1;
	return (res);
}

/*int	main(void)
{
	char	*base = "0123456789ABCDEF";
	char	*num = " ---12D687"; 
	printf("%d\n",ft_atoi_base(num, base));
	return (0);
}*/
