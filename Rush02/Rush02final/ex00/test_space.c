/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_space.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhue <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:27:00 by jhue              #+#    #+#             */
/*   Updated: 2023/08/27 16:27:05 by jhue             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Rush02.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
