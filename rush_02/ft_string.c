/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 22:43:46 by sgoremyk          #+#    #+#             */
/*   Updated: 2023/12/03 22:56:01 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_puts(char *str)
{
	write(1, str, ft_strlen(str));
}

int	ft_strncmp(char *s1, char *s2, int n)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && i < n)
		i++;
	if (s1[i] == '\0' && n == i)
		return (0);
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
