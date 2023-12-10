/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:12:39 by sgoremyk          #+#    #+#             */
/*   Updated: 2023/11/22 14:58:01 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = -1;
	while (++i, str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = -1;
	new_word = 1;
	ft_strlowcase(str);
	while (++i, str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z' && new_word)
		{
			str[i] -= 32;
			new_word = 0;
			continue ;
		}
		if (str[i] >= '0' && str[i] <= '9' && new_word)
			new_word = 0;
		if (str[i] < '0' || str[i] > 'z'
			|| (str[i] > '9' && str[i] < 'a'))
			new_word = 1;
	}
	return (str);
}
