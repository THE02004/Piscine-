/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmougel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 11:27:50 by jmougel           #+#    #+#             */
/*   Updated: 2023/08/20 12:47:54 by llitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c);
char	ft_putstr(char *str);
void	ft_colup(char **map, char *str);
void	ft_coldown(char **map, char *str);
void	ft_rowleft(char **map, char *str);
void	ft_rowright(char **map, char *str);

char	**ft_ini_map( char *str, int row, int col);
void	ft_free(char **map, int row);
char	**ft_print(char *str, int row, int col);

int		ft_strlen(char *str);
int		ft_is_numeric(char *str);
int		ft_check_arg(int argc, char **argv);

void	ft_colup(char **map, char *str);
void	ft_coldown(char **map, char *str);
void	ft_rowleft(char **map, char *str);
void	ft_rowright(char **map, char *str);
void	ft_all(char **map, char *str);