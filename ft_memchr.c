/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 09:48:19 by sloghmar          #+#    #+#             */
/*   Updated: 2022/03/11 17:25:35 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
// Description : examine les n premiers octets de la zone mémoire pointée par s
// 				 à la recherche du caractère c. Le premier octet correspondant
// 				  à c (interprété comme un unsigned char) arrête l'opération.
//Paramètres:
//const void *s : un pointeur indiquant l'adresse du bloc mémoire à utiliser
//					 pour la recherche.
//int c: 	le code numérique de l'octet à rechercher dans le bloc.
//size_t n :indique la taille du bloc de mémoire dans lequel faire la recherche

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *) s)[i] == (unsigned char) c)
			return ((void *) s + i);
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char s[10] = "hello";
	int c = 'l';
	printf("%s\n", (char *)ft_memchr(s, c, 5));
	printf("%s", memchr(s, c, 5));
}
*/
