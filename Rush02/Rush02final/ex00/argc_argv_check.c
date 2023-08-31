/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argc_argv_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:04:25 by tguichar          #+#    #+#             */
/*   Updated: 2023/08/27 17:29:22 by tguichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "Rush02.h"

int	ft_argc_argv(int argc, char **argv)
{
	if (!argc || !argv)
		return (0);
	if (argc < 2 || argc > 3)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	while (argv[1][0] == '-')
	{
		write(1, "Error\n", 6);
		return (0);
	}
	return (1);
}
