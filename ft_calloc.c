/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 13:22:25 by sloghmar          #+#    #+#             */
/*   Updated: 2022/03/03 13:54:39 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
// Description : alloue la mémoire nécessaire pour un tableau de count élément, 
// chacun d'eux représentant size octets,et renvoie un pointeur vers la mémoire
//  allouée. Cette zone est remplie avec des zéros.
//fonctionnement: on fait un malloc de ptr et on rempli par des zero avec
//la fonction ft_bzero.

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc (count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
