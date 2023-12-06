/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 12:09:24 by sgoremyk          #+#    #+#             */
/*   Updated: 2023/12/02 13:38:50 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int main(void)
{
	unsigned int	n;
	char	str1[] = "1234567890";
	char	str2[9] = {'0','0','\0','0','0','0','0','0','0'};

	n = 9;
	ft_strncpy(str2, str1, n);
	puts(str1);
	puts(str2);
	printf("%c %c", str2[3], str2[8]);
	return (0);
}*/
