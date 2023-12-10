/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:19:57 by sgoremyk          #+#    #+#             */
/*   Updated: 2023/12/05 17:02:31 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*all;
	int		size_all;
	int		i;

	size_all = 1;
	all = NULL;
	if (size <= 0)
		return (all);
	i = 0;
	while (i < size)
	{
		size_all += ft_strlen(strs[i]);
		i++;
	}
	size_all += ((size - 1) * ft_strlen(sep));
	all = (char *)malloc(size_all);
	i = 0;
	while (i < size)
	{
		all = ft_strcpy(all, strs[i]);
		if (i != size - 1)
			all = ft_strcpy(all, sep);
		i++;
	}
	*all = '\0';
	return (all - size_all + 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (++i, src[i])
		dest[i] = src[i];
	return (dest + i);
}

int	main(void)
{
	char	**strs;
	char	*sep = "___";
	char	*res;
	int		i;

	strs = (char **)malloc(sizeof(char *) * 10);
	i = 0;
	while (i < 10)
	{
		strs[i] = "abc";
		i++;
	}
	res = ft_strjoin(10, strs, sep);
	puts(res);
	return (0);
}
