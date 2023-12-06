/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 11:19:32 by sgoremyk          #+#    #+#             */
/*   Updated: 2023/11/20 16:06:37 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	t;

	i = -1;
	while (++i < size)
	{
		j = i;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				t = tab[i];
				tab[i] = tab[j];
				tab[j] = t;
			}
			j++;
		}
	}
}

/*int	main(void)
{
	int	i;
	int ar[SIZE] = {9,2,1,4,0,3,7,5,8,6};
	
	i = -1;
	ft_sort_int_tab(ar, SIZE);
	while (++i < SIZE)
		printf("%d ",ar[i]);
	return (0);
}*/
