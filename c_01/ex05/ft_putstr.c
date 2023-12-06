/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 10:26:20 by sgoremyk          #+#    #+#             */
/*   Updated: 2023/11/19 11:40:21 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (++i, *(str + i) != '\0')
		write(1, str + i, 1);
}

/*int	main(void)
{
	char	*str = "Ecole 42\n";
	char	str2[12] = {'1', '2', '3', '4', '\n'};

	ft_putstr(str);
	ft_putstr(str2);
	return (0);
}*/
