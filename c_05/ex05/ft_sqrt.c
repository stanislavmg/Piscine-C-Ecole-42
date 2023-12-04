/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:39:33 by sgoremyk          #+#    #+#             */
/*   Updated: 2023/12/04 17:57:22 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	res;

	res = 1;
	if (nb <= 0)
		return (0);
	while (res <= 46340)
	{
		if (res * res == nb)
			return (res);
		res++;
	}
	return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_sqrt(2147395600));

	return (0);
}*/
