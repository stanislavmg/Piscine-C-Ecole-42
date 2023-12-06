/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:37:12 by sgoremyk          #+#    #+#             */
/*   Updated: 2023/11/28 17:31:20 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str == 0)
		return (i);
	while (str[i])
		i++;
	return (i);
}

/*int	main(void)
{
	char	s1[] = "123456789";
	char	*p;

	p = 0;
	printf("%d\n",ft_strlen(s1));
	printf("%d\n",ft_strlen(p));
	return (0);
}*/
