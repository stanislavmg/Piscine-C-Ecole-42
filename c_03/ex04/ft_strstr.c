/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 10:41:25 by sgoremyk          #+#    #+#             */
/*   Updated: 2023/11/23 19:59:23 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i] == to_find[j])
		{
			if (!to_find[j + 1])
				return (str + i - j);
			j++;
			i++;
		}
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char	s1[] = "12";
	char	s2[] = "";
	char	*ps;
	ps = ft_strstr(s1,s2);
	printf("%s\n", ps);
	return (0);
}
