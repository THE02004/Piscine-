/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llitot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 10:19:55 by llitot            #+#    #+#             */
/*   Updated: 2023/08/20 10:22:12 by llitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_is_numeric(char *str)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (str[i])
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			i++;
			nb++;
		}
		else if (str[i] == 32)
			i++;
		else
			return (1);
	}
	if (nb != 16)
		return (1);
	return (0);
}

int	ft_check_arg(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	if (ft_strlen(argv[1]) != 31)
		return (1);
	if (ft_is_numeric(argv[1]) == 1)
		return (1);
	return (0);
}
