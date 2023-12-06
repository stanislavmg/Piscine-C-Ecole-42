/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:16:42 by sgoremyk          #+#    #+#             */
/*   Updated: 2023/11/22 21:33:38 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_addr(long n)
{
	char	hex[17];
	int		reminder;
	int		i;

	i = -1;
	while (++i < 17)
		hex[i] = '0';
	hex[15] = ':';
	hex[16] = ' ';
	i = 15;
	while (--i, n)
	{
		reminder = n % 16;
		if (reminder < 10)
			hex[i] = reminder + '0';
		else
			hex[i] = (reminder - 10) + 'a';
		n /= 16;
	}
	write(1, hex, 17);
}

void	print_ch(unsigned char ch)
{
	char	hex[2];
	int		reminder;
	int		i;

	hex[0] = '0';
	i = 2;
	while (--i, ch)
	{
		reminder = ch % 16;
		if (reminder < 10)
			hex[i] = reminder + '0';
		else
			hex[i] = (reminder - 10) + 'a';
		ch /= 16;
	}
	write(1, hex, 2);
}

void	last_check(int i)
{
	int	j;

	j = 0;
	if (i)
	{
		while (j < (40 - ((i * 2) + (i / 2))))
		{
			write(1, " ", 1);
			j++;
		}
	}
}

void	thank_you_normi(int i, int j, char *buf, char *str)
{
	if ((i + 1) % 2 == 0)
		write(1, " ", 1);
	if (str[j] < 32 || str[j] == 127)
		buf[i] = '.';
	else
		buf[i] = str[j];
}

void	*ft_print_memory(void *addr, unsigned int size)
{	
	unsigned int	j;
	int				i;
	char			buf[16];
	char			*str;

	str = (char *)addr;
	j = 0;
	while (j < size)
	{
		print_addr((long)(str + j));
		i = -1;
		while (++i < 16 && j < size)
		{
			print_ch(str[j]);
			thank_you_normi(i, j, buf, str);
			j++;
		}
		if (j == size)
			last_check(j % 16);
		write(1, buf, i);
		write(1, "\n", 1);
	}
	return (addr);
}

int	main(void)
{
	char n[] = "asdfkaljsdhg;laksjdg;lkjasd;flkjas;dljhgksdjhf;lgkajsd;lfkjas;ldkjf;lasdkjf;kjashglkhsdf";
	ft_print_memory(n,1000);
	return (0);
}
