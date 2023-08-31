/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 12:49:12 by tguichar          #+#    #+#             */
/*   Updated: 2023/08/14 15:24:59 by tguichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	fin;
	int	temp;

	i = 0;
	fin = size -1;
	while (i <= size / 2 -1)
	{
		temp = tab[i];
		tab[i] = tab[fin];
		tab[fin] = temp;
		i++;
		fin--;
	}
}
/*
#include <unistd.h>
void	ft_put_tab(int *tab, int size)
{
	int	i;
	char	ci[size];


	i = 0;
	while(i <= size -1)
	{
		ci[i] = tab[i] + '0';
		i++;
	}
	write(1,ci,9);
	write(1,"\n",1);
}

int	main(void)
{
	int	tab[] = {1,2,3,4,5,6,7,8,9};
	
	ft_put_tab(tab,9);
	ft_rev_int_tab(tab,9);
	ft_put_tab(tab,9);
}*/
