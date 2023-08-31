/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 09:48:43 by tguichar          #+#    #+#             */
/*   Updated: 2023/08/14 17:40:08 by tguichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
/*
#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;
	int	pa;
	int	pd;

	a = 10;
	b = 5;
	pa = a;
	pd = b;
	printf("avant %d, %d. \n", pa, pd);
	ft_ultimate_div_mod(&pa, &pd);
	printf("apres %d, %d. \n", pa, pd);
}*/
