# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/06 16:32:28 by sgoremyk          #+#    #+#              #
#    Updated: 2023/12/06 16:32:32 by sgoremyk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cc -c -Wall -Wextra -Werror ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
ar -rc libft.a ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
