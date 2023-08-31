/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core .c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhue <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 17:09:29 by jhue              #+#    #+#             */
/*   Updated: 2023/08/26 17:09:31 by jhue             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Rush02.h"
#include <unistd.h>
#include <stdio.h>

int	ft_split(char *sep, char *dict, int k)
{
	int	i;
	int	j;

	i = -1;
	while (i++, dict[i])
	{
		j = 0;
		while (dict[i + j] == sep[j] && sep[j] != '\0')
			j++;
		if (!sep[j])
		{
			ft_putstr(&dict[i + j + 1], k);
			return (1);
		}
	}
	return (0);
}

void	ft_putstr(char *dict, int k)
{
	int	i;

	i = 0;
	while (dict[i] == ' ' && dict[i] != '\n')
		i++;
	if (k != 0)
		ft_putchar(' ');
	while (dict[i] != '\n')
	{
		if (dict[i] == ' ')
		{
			while (dict[i] == ' ' && dict[i] != '\n')
				i++;
			ft_putchar(' ');
		}
		ft_putchar(dict[i]);
		i++;
	}
}

void	ft_reading_nbr(char *nbr, char *dict, int multi, int index)
{
	int		i;
	int		units;

	i = -1;
	units = 1;
	while (i++, multi--, i < ft_strlen(nbr, 0) && units != -1)
	{
		if (multi % 3 == 0 && nbr[i] != '0')
			units = ft_multi_3_1(nbr[i], dict, i);
		else if (multi % 3 == 2 && nbr[i] != '0')
			units = ft_multi_2(nbr, dict, i);
		else if (nbr[i] != '0')
		{
			if (((nbr[i] - '0') * 10 + nbr[i + 1] - '0') < 20)
			{
				units = ft_multi_1_1(nbr, dict, &i);
				multi--;
			}
			else
				units = ft_multi_1_2(nbr, dict, i);
		}
		if (multi % 3 == 0 && units && index)
			units = ft_multi_3_2(dict, i, &index);
	}
	ft_putchar('\n');
}

int	ft_strlen(char *str, int split)
{
	int	i;

	i = 0;
	if (split == 0)
	{
		while (str[i])
			i++;
	}
	else if (split == 1)
	{
		while (str[i] != '\n')
			i++;
		i = i - 2;
	}
	return (i);
}

void	ft_start(char *nbr, char *dict)
{
	int	multi;
	int	index;

	index = -2;
	multi = ft_strlen(nbr, 0) - 1;
	if (multi == 0)
		index = 0;
	else
	{
		while (index++, multi >= 0)
			multi -= 3;
	}
	multi = ft_strlen(nbr, 0);
	if (nbr[0] != '0')
		ft_reading_nbr(nbr, dict, multi, index);
	else
		write(1, "zero\n", 5);
}
