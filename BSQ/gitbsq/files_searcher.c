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

#include "bsq.h"

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
	close(numbers);
	if (reader == -1)
		return (error_null());
	return (dict);
}

int *LVMH(char *buff)
{
	int		i;
	int		*LH[2];
	int		trigger;

	trigger = 0;
	LH[0] = 0;
	LH[1] = 0;
	while(buff[i] != '\0')
	{
		if (buff[i] == '\n')
			LH[0]++;
		while (buf[i] != '\n' && trigger == 0)
		{
			LH[1]++;
			trigger++;
		}
		i++;
	}
	return (LH);
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
