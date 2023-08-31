/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 16:41:53 by tguichar          #+#    #+#             */
/*   Updated: 2023/08/13 13:06:07 by tguichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printnum(int list)
{
	char	num;
	char	num2;

	num = list % 10 + '0';
	num2 = list / 10 + '0';
	write(1, &num2, 1);
	write(1, &num, 1);
}

void	ft_print_comb2(void)
{
	int	list;
	int	list2;

	list = 1;
	list2 = 0;
	while (list2 <= 98)
	{
		while (list <= 99)
		{
			ft_printnum(list2);
			write(1, " ", 1);
			ft_printnum(list);
			if (list == 99 && list2 == 98)
			{
				return ;
			}
			write(1, ", ", 2);
			list++;
		}
		list2++;
		list = list2 + 1;
	}
}
