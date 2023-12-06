/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 10:04:51 by sgoremyk          #+#    #+#             */
/*   Updated: 2023/11/20 16:45:56 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b)
	{
	*div = a / b;
	*mod = a % b;
	}
}

/*int	main(void)
{
	int	a;
	int	b;
	int div;
	int	mod;
	int	*pa;
	int	*pb;
	int	*pdiv;
	int	*pmod;

	a = 0;
	b = 2;
	pa = &a;
	pb = &b;
	pdiv = &div;
	pmod = &mod;
	ft_div_mod(a, b, pdiv, pmod);
	printf("div=%d mod=%d\n",div ,mod);
	return (0);
}*/
