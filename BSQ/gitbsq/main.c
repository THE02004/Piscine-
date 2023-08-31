/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:33:12 by tguichar          #+#    #+#             */
/*   Updated: 2023/08/28 16:33:14 by tguichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int main(void)
{
    char    **map; 
    char    *buff;
    int     size;
    int     *LH;
    int     col = 30;
    int     row = 30;

    size = ft_size(FILE_NAME);
    buff = ft_open(FILE_NAME,size);
    LH = LVMH(LH);
    map = ft_ini_map(map,LH,LH,buff);
    if (map == NULL)
        return (0);
    printf("%s\n",buff);
    ft_print(map,row,col);
    ft_free(map,row);
}