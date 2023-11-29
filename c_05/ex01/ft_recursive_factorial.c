/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:36:09 by sgoremyk          #+#    #+#             */
/*   Updated: 2023/11/29 20:37:55 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_recursive_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	res = nb * ft_recursive_factorial(nb - 1);
	return (res);
}

/*int	main(void)
{
	int	num;

	num = 10;
	printf("%d\n",ft_recursive_factorial(num));

	return (0);
}*/
