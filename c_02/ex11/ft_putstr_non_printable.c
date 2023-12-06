/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:34:06 by sgoremyk          #+#    #+#             */
/*   Updated: 2023/11/22 20:03:57 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hex_print(unsigned char ch)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, hex + (ch / 16), 1);
	write(1, hex + (ch % 16), 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, str + i, 1);
		else
			hex_print(str[i]);
		i++;
	}
}

/*int	main(void)
{
	char	str[] = {'z','f', 5, 127, 's', 11, 'a', 'v', 12, ' ', '\0'};

	ft_putstr_non_printable(str);
	return (0);
}*/
