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

	(void)argc;
	path = "./numbers.dict";
	dictionary = create_dict(path);
	solve(argv[1], dictionary);
	ft_free(dictionary);
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
