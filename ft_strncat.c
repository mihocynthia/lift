/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 03:20:49 by cyluu             #+#    #+#             */
/*   Updated: 2019/09/01 20:53:31 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t			i;
	size_t			j;
	unsigned char	*s1_return;
	unsigned char	*s2_return;

	i = 0;
	j = 0;
	s1_return = (unsigned char *)s1;
	s2_return = (unsigned char *)s2;
	while (s1_return[i] != '\0')
	{
		i++;
	}
	while (s2_return[j] != '\0' && j < (n - 1))
	{
		s1_return[i++] = s2_return[j++];
	}
	s1_return[i] = s2_return[j];
	return ((char *)s1_return);
}
