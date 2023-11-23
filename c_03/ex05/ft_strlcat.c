/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:40:31 by sgoremyk          #+#    #+#             */
/*   Updated: 2023/11/23 20:02:22 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;

	len = 0;
	j = 0;
	while (dest[len])
		len++;
	while (src[j])
		j++;
	i = len;
	len += j;
	if (dest)
	{
		j = 0;
		while (src[j] && j < (size - 1))
		{
			dest[i] = src[j];
			i++;
			j++;
		}	
	}
	dest[i] = '\0';
	return (len);
}

/*int	main(void)
{
	char s1[200] = "hello";
	char s2[] = "123456789";
	//strlcat(s1,s2,256);
	printf("%u\n", ft_strlcat(s1,s2,3));
	puts(s1);
	return (0);
}*/
