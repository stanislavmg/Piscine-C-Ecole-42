/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 20:00:47 by sgoremyk          #+#    #+#             */
/*   Updated: 2023/12/04 20:15:01 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*res;
	int	i;

	res = 0;
	if (min >= max)
		return (res);
	res = (int *)malloc(sizeof(int) * (max - min));
	if (res == 0)
		return (res);
	i = 0;
	while (min < max)
	{
		res[i] = min;
		min++;
		i++;
	}
	return (res);
}

/*int	main(void)
{
	int	*res;
	int	i;
	
	res = ft_range(0, 100);
	i = -1;
	while (++i < 100)
		printf("%d\n", res[i]);
	return (0);
}*/
