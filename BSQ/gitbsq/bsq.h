/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 18:12:13 by tguichar          #+#    #+#             */
/*   Updated: 2023/08/28 18:12:17 by tguichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
#define BSQ_H

#define FILE_NAME "map3x3d2.txt"

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

char	**ft_ini_map(char **str,int *row, int *col,char *buff);
void    ft_free(char **map, int row);
char	**ft_print(char **str, int row, int col);
void	ft_putchar(char c);
int	    ft_size(char *str);
char	*ft_open(char *str, int size);
int	    error_int(void);
char	*error_null(void);
int     *LVMH(char *buff);
#endif
