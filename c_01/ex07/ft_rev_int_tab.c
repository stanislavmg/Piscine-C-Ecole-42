/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 10:57:33 by sgoremyk          #+#    #+#             */
/*   Updated: 2023/11/19 11:39:34 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	t;

	i = -1;
	while (++i <= --size)
	{
		t = tab[i];
		tab[i] = tab[size];
		tab[size] = t;
	}
}

/*int	main(void)
{
	int i;
	int	ar[SIZE] = {1,2,3,4,5,6,7,8,9};

	i = -1;
	ft_rev_int_tab(ar, SIZE);
	while (++i < SIZE)
	   printf("%d ",ar[i]);
	return (0);
}*/
