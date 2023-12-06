/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:17:13 by sgoremyk          #+#    #+#             */
/*   Updated: 2023/11/27 21:41:51 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (src[count] != '\0')
		count++;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (count);
}

/*int	main(void)
{
	char	str1[] = "12345678";
	char	str2[] = "00000000000000";

	printf("%d\n",ft_strlcpy(str2, str1, -2));
	printf("%d\n",strlcpy(str2, str1, -2));
	puts(str1);
	puts(str2);

	return (0);
}*/
