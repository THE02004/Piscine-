/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 18:36:01 by tguichar          #+#    #+#             */
/*   Updated: 2023/08/14 09:05:36 by tguichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>
int	main(void)
{
	int a = 55;
	int b = 42;
	ft_swap(&a,&b);
	
	int	*adressa;
	int	*adressb; 

	adressa = &a;
	adressb = &b;

	printf("a = %d, b = %d.",a,b);
}
*/
