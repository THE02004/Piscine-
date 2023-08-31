/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 09:07:08 by tguichar          #+#    #+#             */
/*   Updated: 2023/08/14 09:47:36 by tguichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/* 
#include	<stdio.h>
int	main(void)
{
	int	a = 10;
	int	b = 2;
	int	div;
	int	mod;
	
	ft_div_mod(a, b, &div, &mod);
	printf("%d ", div);
	printf("%d", mod);
}
*/
