/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:05:55 by tguichar          #+#    #+#             */
/*   Updated: 2023/08/17 17:03:51 by tguichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	dest_len;
	unsigned int	j;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	j = 0;
	i = dest_len;
	if (dest_len >= size)
		return (src_len + size);
	while (src[j] != '\0' && i + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}
/*
#include <stdio.h>
#include <bsd/string.h>
int     main(void)
{
   char haystack[20] = "TutorialsPoint";
   char needle[10] = "Point";
   unsigned int ret = 0;
   unsigned int ret2 = 0;
   char haystack2[20] = "TutorialsPoint";
   char needle2[10] = "Point";

   ret = ft_strlcat(haystack, needle,(unsigned int) 20);
   printf("The substring is: %s with total size of %d\n", haystack, ret);
   ret2 = strlcat(haystack2, needle2,(unsigned int) 20);
   printf("The substring is: %s with total size of %d\n", haystack2, ret2);
   return(0);
}*/
