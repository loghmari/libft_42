/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:43:53 by sloghmar          #+#    #+#             */
/*   Updated: 2022/03/11 17:33:58 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//Description : Cette fonction permet de comparer les caracteres des deux
//chaînes de caractères et de savoir si la première est inférieure,égale ou 
//supérieure à la seconde.La comparaison se fera au maximum sur les n premiers 
//caractères.on compare les caracteres et on soustrait les caractere a la fin
//(ascii)

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char )s1[i] - ((unsigned char )s2[i]));
}
