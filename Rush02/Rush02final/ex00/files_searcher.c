/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   files_searcher.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhue <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:27:52 by jhue              #+#    #+#             */
/*   Updated: 2023/08/27 17:28:45 by tguichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Rush02.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h> 

int	ft_size(char *str)
{
	int		numbers;
	char	dict[10];
	int		count;
	int		reader;

	count = 0;
	reader = 1;
	numbers = open(str, O_RDONLY);
	if (numbers == -1)
		return (error_int());
	while (reader > 0)
	{
		reader = read(numbers, dict, 10);
		if (reader == -1)
			return (error_int());
		count += reader;
	}
	numbers = close(numbers);
	if (numbers == -1)
		return (error_int());
	return (count);
}

char	*ft_open(char *str, int size)
{
	int		numbers;
	char	*dict;
	int		reader;

	dict = (char *) malloc(sizeof(char) * (size + 1));
	dict[size] = '\0';
	if (!dict)
		return (NULL);
	numbers = open(str, O_RDONLY);
	if (numbers == -1)
		return (error_null());
	reader = read(numbers, dict, size);
	if (reader == -1)
		return (error_null());
	numbers = close(numbers);
	if (numbers == -1)
		return (error_null());
	return (dict);
}

int	error_int(void)
{
	write(1, "Error", 5);
	return (0);
}

char	*error_null(void)
{
	write(1, "Error", 5);
	return (NULL);
}
