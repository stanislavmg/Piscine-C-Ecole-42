/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 22:16:59 by sgoremyk          #+#    #+#             */
/*   Updated: 2023/12/03 23:34:42 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	main(int argc, char *argv[])
{
	char	*path;
	char	***dictionary;

	if (valid_args(argc, argv[1]))
		return (1);
	path = "./numbers.dict";
	dictionary = create_dict(path);
	solve(argv[1], dictionary);
	ft_free(dictionary);
	return (0);
}

int	valid_args(int argc, char *argv)
{
	int	i;

	if (argc != 2 || argc != 3)
	{
		write(1, "Incorrect argument\n", 19);
		return (1);
	}
	i = 0;
	while (argv[i])
	{
		if (!(argv[i] >= '0' && argv[i] <= '9'))
		{
			write(1, "Incorrect argument\n", 19);
			return (1);
		}
		i++;
	}
	return (0);
}

void	ft_free(char ***dictionary)
{
	int	i;

	i = 0;
	while (i < g_count)
	{
		free(dictionary[0][i]);
		free(dictionary[1][i]);
		i++;
	}
	free(dictionary[0]);
	free(dictionary[1]);
	free(dictionary);
}
