/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 19:58:35 by tguichar          #+#    #+#             */
/*   Updated: 2023/08/30 13:55:04 by tguichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*copy;
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	copy = (char *) malloc(sizeof(char) * i + 1);
	if (copy == 0)
		return (NULL);
	copy[i] = '\0';
	i = 0;
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	return (copy);
}
/*
int	main(void)
{
	#include <stdio.h>
	char	*src = "les blob les null";
	char	*copy;

	copy = ft_strdup(src);
	if (copy == 0)
		return (0);
	printf("%s",copy);
}*/
