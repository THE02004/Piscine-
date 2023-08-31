/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llitot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 11:26:46 by llitot            #+#    #+#             */
/*   Updated: 2023/08/20 12:33:25 by llitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	**ft_ini_map(char **str,int* row, int* col,char *buff)
{
	int		i;
	int		j;
	char	**map;

	i = 0;
	map = (char **) malloc(col[1] * sizeof(char *));
	if (!map)
		return (NULL);
	while (i < row)
	{
		j = 0;
		map[i] = (char *) malloc(row[0] * sizeof(char));
		if (!map)
			return (NULL);
		while (j < col)
		{
			map[i][j] = '.';
			j++;
		}
		i++;
	}
	return (map);
}

void	ft_free(char **map, int row)
{
	int	i;

	i = 0;
	while (i < row)
	{
		free(map[i]);
		i++;
	}
	free(map);
}

char	**ft_print(char **str, int row, int col)
{
	int		i;
	int		j;
	char	**map;

	map = ft_ini_map(str, row, col);
	i = 1;
	while (i < row - 1)
	{
		j = 1;
		while (j < col - 1)
		{
			ft_putchar(map[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	ft_free(map, row);
	return (map);
}