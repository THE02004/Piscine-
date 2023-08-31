/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:57:40 by tguichar          #+#    #+#             */
/*   Updated: 2023/08/27 16:03:43 by tguichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "Rush02.h"

int	main(int argc, char **argv)
{
	char	*dict;
	int		error;
	int		i;

	error = ft_argc_argv(argc, argv);
	if (error == 0)
		return (0);
	if (argc == 3)
	{
		i = ft_size(FILE_NAME);
		dict = ft_open(argv[2], i);
	}
	else 
	{
		i = ft_size(FILE_NAME);
		dict = ft_open(FILE_NAME, i);
	}
	if (dict == NULL)
	{
		free(dict);
		return (1);
	}
	ft_start(argv[1], dict);
	free(dict);
	return (0);
}
