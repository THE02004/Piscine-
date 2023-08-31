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

#include "main.h"

char	**ft_ini_map(char *str, int row, int col)
{
	int		i;
	int		j;
	char	**map;

	i = 0;
	map = malloc(row * sizeof(char *));
	if (!map)
		return (NULL);
	while (i < row)
	{
		j = 0;
		map[i] = malloc(col * sizeof(char));
		if (!map)
			return (NULL);
		while (j < col)
		{
			map[i][j] = ' ';
			j++;
		}
		i++;
	}
	ft_all(map, str);
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

char	**ft_print(char *str, int row, int col)
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
			if (j != col - 1)
				ft_putchar('.');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	ft_free(map, row);
	return (map);
}
