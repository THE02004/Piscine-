/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 13:39:13 by tguichar          #+#    #+#             */
/*   Updated: 2023/08/18 12:24:44 by tguichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	if (!(to_find[i]))
		return (str);
	while (str[i])
	{
		j = 0;
		k = i;
		while (str[k] == to_find[j])
		{
			j++;
			if (!(to_find[j]))
				return (str + i);
			k++;
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void) 
{
   char haystack[20] = "TutorialsPoPointSTRE";
   char needle[10] = "Point";
   char *ret;

   ret = ft_strstr(haystack, needle);

   printf("The substring is: %s\n", ret);
   
   return(0);
}*/
