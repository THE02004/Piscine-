/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:19:22 by tguichar          #+#    #+#             */
/*   Updated: 2023/08/30 22:05:16 by tguichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*range;
	int		i;

	i = 0;
	if (min >= max)
		return (NULL);
	range = (int *) malloc(sizeof(int) * (max - min));
	if (range == NULL)
		return (NULL);
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
/*
int		main(void)
{
	#include <stdio.h>
	int		x;
	int		y;
	int		*r;
	int 	i;

	i = 0;
	x = 0;
	y = 5;
	r = ft_range(x,y);
	while (i < y-x)
	{
		printf("%d",r[i]);
		i++;
	}
}*/
