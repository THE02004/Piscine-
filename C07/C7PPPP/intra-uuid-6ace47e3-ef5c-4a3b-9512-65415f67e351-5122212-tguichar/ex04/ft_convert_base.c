/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:05:20 by tguichar          #+#    #+#             */
/*   Updated: 2023/08/30 14:07:50 by tguichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	indexof(char c, char *base)
{
	int	index;

	index = 0;
	while (base[index] != '\0')
	{
		if (base[index] == c)
			return (index);
		index++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base_from, int base_from_len)
{
	int		j;
	int		sign;
	int		exit;

	exit = 0;
	j = 0;
	sign = 1;
	while ((str[j] >= 9 && str[j] <= 13) || str[j] == 32)
	{
		j++;
	}
	while (str[j] == '-' || str[j] == '+')
	{
		if (str[j] == '-')
			sign = sign * -1;
		j++;
	}
	while (indexof(str[j], base_from) != -1)
	{
		exit = exit * base_from_len + indexof(str[j], base_from);
		j++;
	}
	return (sign * exit);
}
