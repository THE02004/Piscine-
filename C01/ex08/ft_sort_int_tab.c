/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 13:37:49 by tguichar          #+#    #+#             */
/*   Updated: 2023/08/14 15:33:20 by tguichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	size--;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = temp;
			i = -1;
		}
		i++;
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
	int	tab[] = {9,5,4,3,1,2,6,8,7};
	
	ft_put_tab(tab,9);
	ft_sort_int_tab(tab,9);
	ft_put_tab(tab,9);
}*/
