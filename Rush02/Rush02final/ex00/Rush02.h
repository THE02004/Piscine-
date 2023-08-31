/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhue <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 17:58:32 by jhue              #+#    #+#             */
/*   Updated: 2023/08/26 17:58:33 by jhue             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# define FILE_NAME "numbers.dict"

int		ft_split(char *sep, char *dict, int k);
void	ft_reading_nbr(char *nbr, char *dict, int multi, int index);
int		ft_multi_3_2(char *dict, int i, int *index);
int		ft_multi_3_1(char nbr, char *dict, int i);
int		ft_multi_2(char *nbr, char *dict, int i);
int		ft_multi_1_1(char *nbr, char *dict, int *i);
int		ft_multi_1_2(char *nbr, char *dict, int i);
int		ft_strlen(char *str, int split);
void	ft_putstr(char *dict, int i);
void	ft_start(char *nbr, char *dict);
void	ft_putchar(char c);
char	*ft_open(char *str, int size);
int		error_int(void);
char	*error_null(void);
int		ft_size(char *str);
int		ft_argc_argv(int argc, char **argv);
#endif
