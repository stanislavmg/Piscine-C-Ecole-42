/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 21:14:47 by sgoremyk          #+#    #+#             */
/*   Updated: 2023/11/20 11:07:57 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{	
	int	i;

	i = -1;
	while (++i, str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}

/*int	main(void)
{
	char	str1[] = "        sadf  sdfasdf  adsz zzzZZ";
	char	str2[] = "asdfg1234QWERI";

	puts(ft_strupcase(str2));
	puts(ft_strupcase(str1));
	return (0);
}*/
