/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llitot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 10:32:45 by llitot            #+#    #+#             */
/*   Updated: 2023/08/20 10:56:38 by llitot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	main(int argc, char **argv)
{
	int	row;
	int	col;

	row = 6;
	col = 6;
	if (ft_check_arg(argc, argv) == 1)
	{
		ft_putstr("Error\n");
		return (1);
	}
	ft_print(argv[1], row, col);
	return (0);
}
