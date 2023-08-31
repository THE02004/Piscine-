/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:19:44 by tguichar          #+#    #+#             */
/*   Updated: 2023/08/24 20:06:59 by tguichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/
/*void	ft_putnbr(int nb);*/

int	run(char str, char *base)
{
	int	comp;

	comp = 0;
	while (base[comp] != '\0')
	{
		if (base[comp] == str)
			return (comp);
		comp++;
	}
	return (-1);
}

int	verif(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		if ((base[i] <= 32 || base[i] >= 126)
			|| (base[i] == '-' || base[i] == '+'))
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		j;
	int		sign;
	int		exit;

	exit = 0;
	j = 0;
	sign = 1;
	i = verif(base);
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
	while (run(str[j], base) != -1)
	{
		exit = exit * i + run(str[j], base);
		j++;
	}
	return (sign * exit);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	char	*nb;
	char	*base;
	int		res;

	if (argc > 2)
	{
		nb = argv[1];
		base = argv[2];
		res = ft_atoi_base(nb, base);
		printf("RESULT: %d\n", res);
	}
}*/
