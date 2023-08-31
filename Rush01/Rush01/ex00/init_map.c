/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llitot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 10:25:36 by llitot            #+#    #+#             */
/*   Updated: 2023/08/20 12:43:09 by llitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_colup(char **map, char *str)
{
	map[0][1] = str[0];
	map[0][2] = str[2];
	map[0][3] = str[4];
	map[0][4] = str[6];
}

void	ft_coldown(char **map, char *str)
{
	map[5][1] = str[8];
	map[5][2] = str[10];
	map[5][3] = str[12];
	map[5][4] = str[14];
}

void	ft_rowleft(char **map, char *str)
{
	map[1][0] = str[16];
	map[2][0] = str[18];
	map[3][0] = str[20];
	map[4][0] = str[22];
}

void	ft_rowright(char **map, char *str)
{
	map[1][5] = str[24];
	map[2][5] = str[26];
	map[3][5] = str[28];
	map[4][5] = str[30];
}

void	ft_all(char **map, char *str)
{
	ft_colup(map, str);
	ft_coldown(map, str);
	ft_rowleft(map, str);
	ft_rowright(map, str);
}
