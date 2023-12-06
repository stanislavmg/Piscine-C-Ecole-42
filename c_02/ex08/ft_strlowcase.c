/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:09:03 by sgoremyk          #+#    #+#             */
/*   Updated: 2023/11/22 13:11:41 by sgoremyk         ###   ########.fr       */
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

/*int	main(void)
{
	char	str1[] = "    ASL:DJHFHSDJKVN    sadf  sdfasdf  adsz zzzZZ";
	char	str2[] = "asdfg1234QWERI";

	puts(ft_strlowcase(str2));
	puts(ft_strlowcase(str1));
	return (0);
}*/
