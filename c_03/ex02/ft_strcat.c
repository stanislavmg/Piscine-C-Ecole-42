/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:57:29 by sgoremyk          #+#    #+#             */
/*   Updated: 2023/11/23 15:25:34 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	if (dest)
	{
		while (src[j])
		{
			dest[i] = src[j];
			i++;
			j++;
		}	
	}
	dest[i] = '\0';
	return (dest);
}
