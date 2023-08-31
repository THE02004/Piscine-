/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 12:17:32 by tguichar          #+#    #+#             */
/*   Updated: 2023/08/31 12:56:07 by tguichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *strs)
{
	int		i;

	i = 0;
	while (strs[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strsize(char **strs, int size)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*join;
	int		sep_len;

	i = 0;
	if (size == 0)
	{
		join = (char *)malloc(sizeof(char) * 1);
		join[0] = '\0';
		return (join);
	}
	sep_len = ft_strlen(sep) * (size - 1);
	join = (char *)malloc(sizeof(char) 
			* (sep_len + ft_strsize(strs, size) + 1));
	if (!join)
		return (NULL);
	join[0] = '\0';
	while (i < size)
	{
		ft_strcat(join, strs[i]);
		if (i < size - 1)
			ft_strcat(join, sep);
		i++;
	}
	return (join);
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
	char	*sep;
	char	**strs;
	int		size;

	if (argc > 3)
	{
		size = atoi(argv[1]);
		sep = argv[2];
		strs = argv + 3;
		printf("\"%s\"\n", ft_strjoin(size, strs, sep));
	}
}*/
