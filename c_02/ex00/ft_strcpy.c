/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 11:54:24 by sgoremyk          #+#    #+#             */
/*   Updated: 2023/11/20 10:23:22 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (++i, src[i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	str1[] = "123456789";
	char	str2[] = "abcdefghisa;dlfkas";

	ft_strcpy(str2, str1);
	puts(str1);
	puts(str2);
	return (0);
}*/
