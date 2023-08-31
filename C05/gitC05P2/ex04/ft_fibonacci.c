/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 12:51:02 by tguichar          #+#    #+#             */
/*   Updated: 2023/08/23 14:54:10 by tguichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
		return (0);
	if (index == 1)
	{
		return (1);
	}
	return ((ft_fibonacci(index - 1)) + (ft_fibonacci(index - 2)));
}
/*
int	main(void)
{
	#include <stdio.h>
	printf("%d",ft_fibonacci(14));
}*/
