/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:20:08 by sgoremyk          #+#    #+#             */
/*   Updated: 2023/11/25 11:40:44 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	if (s1[i] > s2[i])
		return (s1[i]);
	if (s1[i] < s2[i])
		return (-s2[i]);
	return (0);
}

/*int	main(void)
{
	char	str1[] = "1";
	char	str2[] = "12";

	printf("%d\n",strcmp(str1,str2));
	printf("%d\n",ft_strcmp(str1,str2));
	return (0);
}*/
