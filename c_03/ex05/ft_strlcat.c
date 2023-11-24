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

unsigned int 	ft_strlen(char* str)
{
	unsigned int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size == 0 || size <= dest_len)
		return (size + src_len);	
	i = dest_len;
	j = 0;
	while (src[j] && j < (size - dest_len - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}	
	dest[i] = '\0';
	return (src_len + dest_len);
}
