/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 10:49:30 by tguichar          #+#    #+#             */
/*   Updated: 2023/08/26 15:28:36 by tguichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	temp;

	temp = 1;
	if (power < 0)
		return (0);
	if (power == 0 || nb == 1)
		return (1);
	while (power > 0)
	{
		temp = temp * nb;
		power--;
	}
	return (temp);
}
/*
int	main(void)
{
	#include <stdio.h>
	int i = 0;
	while (++i < 10)
		printf("%d\n",ft_iterative_power(2,i));
}*/
