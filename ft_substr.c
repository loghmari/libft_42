/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:14:51 by sloghmar          #+#    #+#             */
/*   Updated: 2022/03/14 12:10:14 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//Description : Alloue (avec malloc et retourne une chaîne de caractères 
//issue de la chaîne ’s’.
//Cette nouvelle chaîne commence à ’start’ et a pour taille maximale ’len’

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;

	if (start > ft_strlen(s))
		return (ft_strdup(""));
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, s + start, len + 1);
	return (dest);
}
/*
int main()
{
	char a[] = "abcdefg";
	printf("%s", ft_substr(a, 2, 8));
	
}
*/
