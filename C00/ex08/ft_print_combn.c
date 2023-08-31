/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 10:19:44 by tguichar          #+#    #+#             */
/*   Updated: 2023/08/13 11:32:55 by tguichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_list(int *tab, int n, int *ref)
{
	int	contar;
	int	nb;

	contar = 0;
	while (contar <= n -1)
	{
		nb = tab[contar] + '0';
		write(1, &nb, 1);
		contar++;
	}
	if (tab[0] != ref[0])
		write(1, ", ", 2);
}

void	ft_run(int *tab, int *ref, int n)
{
	int	contar;

	contar = n - 1;
	ft_print_list(tab, n, ref);
	while (tab[0] != ref[0])
	{
		while (tab[contar] == ref[contar])
		{
			contar--;
		}
		tab[contar]++;
		while (contar != n -1)
		{
			contar++;
			tab[contar] = tab[contar -1] + 1;
		}
		ft_print_list(tab, n, ref);
	}
}

void	ft_initref(int n, int *ref)
{
	int	i;
	int	nb;

	nb = 9;
	i = n - 1;
	while (i >= 0)
	{
		ref[i] = nb;
		i--;
		nb--;
	}
}

void	ft_print_combn(int n)
{
	int	tab[10];
	int	ref[10];
	int	i;

	i = 0;
	while (i <= n - 1)
	{
		tab[i] = i;
		i++;
	}
	ft_initref(n, ref);
	ft_run(tab, ref, n);
}
