/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   separator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhue <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 17:10:41 by jhue              #+#    #+#             */
/*   Updated: 2023/08/26 17:10:43 by jhue             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Rush02.h"
#include <unistd.h>

int	ft_multi_3_1(char nbr, char *dict, int i)
{
	char	sep[100];

	if (nbr != '0') 
	{
		sep[0] = nbr;
		sep[1] = ':';
		sep[2] = '\0';
		if (!ft_split(sep, dict, i))
			return (-1);
	}
	return (1);
}

int	ft_multi_3_2(char *dict, int i, int *index)
{
	int		j;
	char	sep[100];

	sep[0] = '1';
	j = 0;
	while (j++ <= (*index * 3) - 1)
		sep[j] = '0';
	sep[j] = ':';
	sep[j + 1] = '\0';
	if (!ft_split(sep, dict, i + 1))
		return (-1);
	*index = *index - 1;
	return (0);
}

int	ft_multi_2(char *nbr, char *dict, int i)
{
	char	sep[100];

	sep[0] = nbr[i];
	sep[1] = ':';
	sep[2] = '\0';
	if (!ft_split(sep, dict, i))
		return (-1);
	sep[0] = '1';
	sep[1] = '0';
	sep[2] = '0';
	sep[3] = ':';
	sep[4] = '\0';
	if (!ft_split(sep, dict, i + 1))
		return (-1);
	return (1);
}

int	ft_multi_1_1(char *nbr, char *dict, int *i)
{
	char	sep[1000];

	sep[0] = nbr[*i];
	sep[1] = nbr[*i + 1];
	sep[2] = ':';
	sep[3] = '\0';
	if (!ft_split(sep, dict, *i))
		return (-1);
	*i = *i + 1;
	return (1);
}

int	ft_multi_1_2(char *nbr, char *dict, int i)
{
	char	sep[100];

	sep[0] = nbr[i];
	sep[1] = '0';
	sep[2] = ':';
	sep[3] = '\0';
	if (!ft_split(sep, dict, i))
		return (-1);
	return (1);
}
