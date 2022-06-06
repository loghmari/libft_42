/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 09:50:59 by sloghmar          #+#    #+#             */
/*   Updated: 2022/03/11 17:31:53 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
// Description : permet de copier une chaîne de caractères dans une autre chaîne
// 				 en limitant le nombre de caractères copiés.

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t size)
{
	size_t	i;

	i = 0;
	if (!dst || !src)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
