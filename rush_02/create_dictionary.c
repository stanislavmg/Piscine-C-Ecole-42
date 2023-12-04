/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_dictionary.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 22:43:35 by sgoremyk          #+#    #+#             */
/*   Updated: 2023/12/03 22:58:56 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush.h"

char	*get_str(char *buf, int len_word)
{
	char	*str;
	int		i;

	str = (char *)malloc(len_word + 1);
	i = 0;
	while (i < len_word)
	{
		str[i] = buf[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

void	get_num(char **dictionary, char *buf, int ch)
{
	int	i;
	int	start_pos;
	int	line;

	line = 0;
	i = 0;
	while (i < ch)
	{
		start_pos = i;
		while (buf[i] >= '0' && buf[i] <= '9' && i < ch)
			i++;
		dictionary[line] = get_str(&buf[start_pos], i - start_pos);
		line++;
		while (buf[i] != '\n' && i < ch)
			i++;
		i++;
	}
}

void	get_word(char **dictionary, char *buf, int ch)
{
	int	i;
	int	start_pos;
	int	line;

	line = 0;
	i = 0;
	while (i < ch)
	{
		while (buf [i] != ':' && i < ch)
			i++;
		i++;
		while (buf [i] == ' ' && i < ch)
			i++;
		start_pos = i;
		while (buf[i] != '\n' && i < ch)
			i++;
		dictionary[line] = get_str(&buf[start_pos], i - start_pos);
		line++;
		i++;
	}
}

char	***create_dict(char *path)
{
	char	***dictionary;
	char	buf[BUF_SIZE];
	int		fd;
	int		ch;

	g_count = count_lines(buf, path);
	fd = ft_open(path);
	ch = 1;
	dictionary = (char ***)malloc(sizeof(char ***) * 2);
	dictionary[0] = (char **)malloc(sizeof(char **) * g_count);
	dictionary[1] = (char **)malloc(sizeof(char **) * g_count);
	while (ch != 0)
	{
		ch = read(fd, buf, BUF_SIZE);
		get_word(dictionary[0], buf, ch);
		get_num(dictionary[1], buf, ch);
	}
	return (dictionary);
}
