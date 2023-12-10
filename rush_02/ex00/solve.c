/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 22:16:50 by sgoremyk          #+#    #+#             */
/*   Updated: 2023/12/03 22:56:41 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	seek_str(char ***dictionary, char *to_find, int len)
{
	int	i;

	i = 0;
	while (i < g_count && ft_strncmp(dictionary[1][i], to_find, len))
		i++;
	if (i == g_count)
		return (0);
	ft_puts(dictionary[0][i]);
	write(1, " ", 1);
	return (1);
}

int	print_num(char ***dictionary, char *num)
{
	char	seek[3];

	seek[0] = '1';
	seek[1] = '0';
	seek[2] = '0';
	if (num[0] == '0' && num[1] == '0' && num[2] == '0')
		return (0);
	if (num[0] != '0')
	{
		seek_str(dictionary, &num[0], 1);
		seek_str(dictionary, &seek[0], 3);
	}
	if (num[1] == '1')
	{
		seek_str(dictionary, &num[1], 2);
		return (1);
	}
	if (num[1] != '0')
	{
		seek[1] = num[1];
		seek_str(dictionary, &seek[1], 2);
	}
	if (num[2] != '0')
		seek_str(dictionary, &num[2], 1);
	return (1);
}

void	solve(char *argv, char ***dictionary)
{
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(argv);
	if (len % 3 != 0)
	{
		argv = first_print(dictionary, argv, &len);
		i = 1;
		if (len > 3)
			print_dig(dictionary, len);
		len -= 3;
	}
	else
		len -= 2;
	while (*argv)
	{
		i = print_num(dictionary, argv);
		if (i && len > 3)
			print_dig(dictionary, len);
		argv += 3;
		len -= 3;
	}
}

char	*first_print(char ***dictionary, char *num, int *len)
{
	char	seek[2];

	seek[0] = '0';
	seek[1] = '0';
	if (*len % 3 == 2 && num[0] != '1')
	{
		seek[0] = num[0];
		seek_str(dictionary, &seek[0], 2);
		*len -= 1;
		return (num + 2);
	}
	if (*len % 3 == 2 && num[0] == '1')
	{
		seek_str(dictionary, &num[0], 2);
		*len -= 1;
		return (num + 2);
	}
	seek_str(dictionary, &num[0], 1);
	return (num + 1);
}

void	print_dig(char ***dictionary, int len)
{
	int		i;
	char	*str;

	str = (char *)malloc(len);
	i = 0;
	str[i] = '1';
	i++;
	while (i < len)
	{
		str[i] = '0';
		i++;
	}
	seek_str(dictionary, str, len);
	free (str);
}
