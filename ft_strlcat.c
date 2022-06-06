/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 14:22:34 by sloghmar          #+#    #+#             */
/*   Updated: 2022/03/11 22:39:08 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
/*Description : Cette fonction permet de concaténer à une chaîne de caractères
 *  déjà existante le contenu d'une seconde, dans la limite d'un nombre maximal 
 *  de caractères. Bien entendu le bloc de mémoire devant recevoir le contenu 
 *  à concaténer doit être alloué de manière à être suffisament grand pour 
 *  contenir la totalité des deux chaînes de caractères.
*/

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;
	int				k;
	int				l;

	i = ft_strlen(dest);
	k = 0;
	l = ft_strlen(src);
	j = i;
	if (i >= dstsize)
		return (dstsize + l);
	while (src[k] && j < dstsize - 1)
	{
		dest[k + i] = src[k];
		k++;
		j++;
	}
	dest[k + i] = '\0';
	return (i + l);
}
/*
int main()
{
	char *dest = "rrrrrrrrrrrrrrr";
	printf("%zu", ft_strlcat(dest, "lorem ipsum dolor sit amet", 5));
}
*/
