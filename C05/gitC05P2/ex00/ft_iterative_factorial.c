/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 12:57:04 by tguichar          #+#    #+#             */
/*   Updated: 2023/08/26 15:29:38 by tguichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	res = 1;
	i = nb - 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (i > 1)
	{
		nb = nb * i;
		i--;
	}
	return (nb);
}
/*
int     ft_iterative_factorial(int nb)
{
	int	i; 
	i = 0;
	while(

}*/
/*
int main ()
{
	#include <stdio.h>
	printf ( "%d",ft_iterative_factorial(5));
	return (0); 
}*/
