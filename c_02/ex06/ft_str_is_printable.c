/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 20:34:53 by sgoremyk          #+#    #+#             */
/*   Updated: 2023/11/22 13:13:44 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = -1;
	while (++i, str[i])
	{
		if (str[i] > 31 && str[i] < 127)
			continue ;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char	*str1 = "";
	char	ch;
	char	*str2;
	
	ch = 0;
	str2 = &ch;
	printf("%d\n",ft_str_is_printable(str1));
	printf("%d\n",ft_str_is_printable(str2));
	return (0);
}*/
