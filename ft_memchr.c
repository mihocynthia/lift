/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 16:15:55 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/24 15:10:54 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    const char *str;
    size_t i;

    i = 0;
    str = s;
    if (n == 0)
        return NULL;

    while(i < n && str[i])
    {
        if(str[i] == c)
        {
            return ((char*)&str[i]);
        }
        i++;
    }
    return NULL;

}
