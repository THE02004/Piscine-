/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:21:26 by tguichar          #+#    #+#             */
/*   Updated: 2023/08/24 13:47:45 by tguichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 7;
	if (nb == 2 || nb == 3 || nb == 5)
	{
		return (1);
	}
	if (nb % 2 == 0 || nb % 5 == 0 || nb % 3 == 0 || nb <= 1)
	{
		return (0);
	}
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	if (nb <= 2)
		return (2);
	while (ft_is_prime(nb) != 1)
	{
		nb++;
	}
	return (nb);
}
/*
int	main(void)
{
	#include <stdio.h>
	printf("%d",ft_find_next_prime(2147483647));
}*/
