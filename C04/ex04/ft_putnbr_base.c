/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:25:26 by tguichar          #+#    #+#             */
/*   Updated: 2023/08/24 20:08:59 by tguichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char car)
{
	write(1, &car, 1);
}

void	run(unsigned int nbr, char *base, int i)
{
	if (nbr > 0)
	{
		run(nbr / i, base, i);
		ft_print(base[nbr % i]);
	}
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

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	i = verif(base);
	if (i == 0)
		return ;
	if (nbr == 0)
	{
		write(1, &base[0], 1);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = nbr * -1;
	}
	run((unsigned int)nbr, base, i);
}
/*
#include <stdlib.h>
int	main(int argc, char **argv)
{
	int	nb;
	
	if (argc > 2)
	{
		nb = atoi(argv[1]);
		ft_putnbr_base(nb ,argv[2]);

	}
}*/
