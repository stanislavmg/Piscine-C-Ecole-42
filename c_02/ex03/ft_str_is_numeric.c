/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 19:04:42 by sgoremyk          #+#    #+#             */
/*   Updated: 2023/11/20 10:33:04 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = -1;
	while (++i, str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			continue ;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char	*str1 = "12a';";
	char	*str2 = "";

	printf("%d\n",ft_str_is_numeric(str1));
	printf("%d\n",ft_str_is_numeric(str2));
	return(0);
}*/
