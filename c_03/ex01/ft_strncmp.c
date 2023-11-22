/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:43:38 by sgoremyk          #+#    #+#             */
/*   Updated: 2023/11/22 13:56:49 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && i < n)
		i++;
	if (s1[i] > s2[i])
		return (s1[i]);
	if (s1[i] < s2[i])
		return (-s2[i]);
	return (0);
}

/*int	main(void)
{
	char	str1[] = "0000a000";
	char	str2[] = "00000000123";
	int	i = 5;

	printf("%d\n",strncmp(str1,str2,i));
	printf("%d\n",ft_strncmp(str1,str2,i));
	return (0);
}*/
