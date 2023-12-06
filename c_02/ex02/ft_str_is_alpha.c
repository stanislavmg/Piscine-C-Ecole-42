/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 17:44:23 by sgoremyk          #+#    #+#             */
/*   Updated: 2023/11/27 13:40:22 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = -1;
	while (++i, str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
			continue ;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char	*str1 = "aaAasRjlkZ";
	char	*str2 = "asdf;laskdgj1";

	printf("%d\n",ft_str_is_alpha(str1));
	printf("%d\n",ft_str_is_alpha(str2));
	return (0);
}*/
