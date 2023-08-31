/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 10:05:45 by tguichar          #+#    #+#             */
/*   Updated: 2023/08/16 11:36:13 by tguichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32; 
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int     main(void)
{
        char chaine []= "t,h,e,o";
        printf("%s", ft_strupcase(chaine));
        return 0;
}*/
