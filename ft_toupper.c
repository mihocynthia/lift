/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 10:46:51 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/29 02:22:12 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_fromlower(int c)
{
	return (c >= 'a' && c <= 'z');
}

int		ft_toupper(int c)
{
if (ft_fromlower(c))
	return (c - 32);
else
	return (c);
}
// return (c >= 'a' && c<= 'z' ? c - 32 (c))


