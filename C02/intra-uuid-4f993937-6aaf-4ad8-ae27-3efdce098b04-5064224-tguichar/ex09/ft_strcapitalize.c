/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 10:28:01 by tguichar          #+#    #+#             */
/*   Updated: 2023/08/17 18:50:52 by tguichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[j] <= 'z')
			|| (str[i] >= '0' || str[i] <= '9'))
		{
			while ((str[j] >= 'a' && str[j] <= 'z')
				|| (str[j] >= '0' && str[j] <= '9'))
				j++;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			i = j;
		}
		i++;
		j = i;
	}
	return (str);
}
/*
#include <stdio.h>
int     main(void)
{
        char chaine []= "je AAA:une[tOMATE]42jaime=les-neau   ";
        printf("%s", ft_strcapitalize(chaine));

        return 0;
}*/
