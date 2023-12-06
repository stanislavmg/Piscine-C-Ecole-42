/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 10:16:33 by sgoremyk          #+#    #+#             */
/*   Updated: 2023/11/19 11:40:49 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	if (*b)
	{
		temp = *a;
		*a = *a / *b;
		*b = temp % *b;
	}
}

/*int	main(void)
{
	int	a;
	int	b;
	int	*pa;
	int	*pb;

	a = 122;
	b = 10;
	pa = &a;
	pb = &b;
	ft_ultimate_div_mod(pa, pb);
	printf("a=%d b=%d\n", a, b);
	return (0);
}*/
