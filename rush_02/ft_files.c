/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_files.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 22:43:09 by sgoremyk          #+#    #+#             */
/*   Updated: 2023/12/03 22:59:18 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	count_lines(char *buf, char *name)
{
	int	i;
	int	ch;
	int	fd;
	int	count;

	count = 0;
	i = 0;
	fd = ft_open(name);
	ch = 1;
	while (ch != 0)
	{
		ch = read(fd, buf, BUF_SIZE);
		while (i < ch)
		{
			if (buf[i] == '\n')
				count++;
			i++;
		}
	}
	ft_close(fd);
	return (count);
}

int	ft_close(int fd)
{
	if (close(fd))
	{
		write(2, "Close error\n", 12);
		return (-1);
	}
	return (0);
}

int	ft_open(char *path)
{
	int	fd;

	fd = open(path, O_RDONLY);
	if (fd == -1)
	{
		write(2, "Open error\n", BUF_SIZE);
		return (-1);
	}
	return (fd);
}
