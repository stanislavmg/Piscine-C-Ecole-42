/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 22:17:12 by sgoremyk          #+#    #+#             */
/*   Updated: 2023/12/03 23:34:43 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#define BUF_SIZE 1024
#define STANDART_DICTIONARY "./numbers.dict"

int		g_count;
int		ft_strlen(char *str);
int		ft_open(char *path);
int		valid_args(int argc, char *argv);
int		ft_close(int fd);
void	ft_puts(char *str);
void	ft_free(char ***dictionary);
int		ft_strncmp(char *s1, char *s2, int n);
int		count_lines(char *buf, char *name);
int		seek_str(char ***dictionary, char *to_find, int pos);
char	***create_dict(char *path);
char	*get_str(char *buf, int len_word);
void	get_num(char **dictionary, char *buf, int ch);
void	get_word(char **dictionary, char *buf, int ch);
int		print_num(char ***dictionary, char *num);
void	print_dig(char ***dictionary, int len);
char	*first_print(char ***dictionary, char *num, int *len);
void	solve(char *argv, char ***dictionary);
