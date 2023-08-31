/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:08:42 by tguichar          #+#    #+#             */
/*   Updated: 2023/08/31 12:56:37 by tguichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(char *str, char *base_from, int base_from_len);
int	indexof(char c, char *base);

int	eval_number_size(int nb, int base_len)
{
	int				size;
	unsigned int	u_nbr;

	if (nb == 0)
		return (1);
	size = 0;
	if (nb < 0)
	{
		u_nbr = (unsigned int)(-nb);
		size++;
	}
	else
		u_nbr = (unsigned int) nb;
	while (u_nbr > 0)
	{
		u_nbr /= base_len;
		size++;
	}
	return (size);
}

char	*ft_itoa_base(long int nb, char *base, int base_len)
{
	char	*res;
	long	i;
	int		size;

	size = eval_number_size(nb, base_len);
	res = (char *) malloc((size + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	if (nb == 0)
		res[0] = base[0];
	i = size - 1;
	if (nb < 0)
	{
		res[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0 && i >= 0)
	{
		res[i] = base[nb % base_len];
		nb /= base_len;
		i--;
	}
	res[size] = '\0';
	return (res);
}

int	base_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+')
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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		base_to_len;
	int		base_from_len;
	int		nb;

	base_to_len = base_check(base_to);
	base_from_len = base_check(base_from);
	if (base_to_len == 0 || base_from_len == 0)
		return (NULL);
	nb = ft_atoi_base(nbr, base_from, base_from_len);
	return (ft_itoa_base((long) nb, base_to, base_to_len));
}
/*
int		main(int argc,char **argv)
{
    int nb;
    
    if (argc > 2)
    {
        argc = 1;
        printf("%s\n",ft_convert_base(argv[1], argv[2], argv[3]));
    }
}*/
