/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 20:19:26 by sgoremyk          #+#    #+#             */
/*   Updated: 2023/11/23 15:30:21 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	if (dest)
	{
		while (src[j] && j < nb)
		{
			dest[i] = src[j];
			i++;
			j++;
		}	
	}
	dest[i] = '\0';
	return (dest);
}
/*int	main(void)
{
	char	s1[] = "0000";
	char	s2[] = "";
	unsigned i = 2;
	
	//printf("%p\n",strncat(s2, s1, i));
	printf("%p\n", ft_strncat(s2, s1, i));
	puts(s2);
	return (0);
}*/
