/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 20:30:00 by sgoremyk          #+#    #+#             */
/*   Updated: 2023/11/22 13:14:02 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = -1;
	while (++i, str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			continue ;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char	*str1 = "ASDFGHJKL";
	char	*str2 = "asdfg1234QWERI";

	printf("%d\n",ft_str_is_uppercase(str1));
	printf("%d\n",ft_str_is_uppercase(str2));
	return (0);
}*/
