/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:49:46 by sgoremyk          #+#    #+#             */
/*   Updated: 2023/11/28 17:31:52 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	unsigned int	i;

	i = 0;
	if (str != 0)
	{
		while (str[i])
			i++;
		write(1, str, i);
	}
}

/*int	main(void)
{
	char	s1[] = "123456789asdfgh\n";

	ft_putstr(s1);
	return (0);
}*/
