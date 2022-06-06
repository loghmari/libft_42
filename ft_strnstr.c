/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 13:52:25 by sloghmar          #+#    #+#             */
/*   Updated: 2022/03/02 14:59:45 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
// Description :La fonction strnstr recherche la première occurrence de la 
// chaîne de caractères à terminaison nulle Needle dans la chaîne de caractères 
// Haystack,la recherche ne porte pas sur plus de len caractères.Les caractères 
// qui apparaissent après un caractère \0 ne sont pas recherchés. 
//
//fonctionnement: needle[0] tant que pas trouver dans Haystack. une fois 
//needle[0] trouver dans haystack[i], on accremente  [j] et haystack[i+j].
//et tant que needle[j] == haystack[i+j] et i+j<len on continu.

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (*needle == '\0' || needle == NULL)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
			{
				return ((char *)haystack + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int main()
{
char haystack[15] = "salamaleykoum";
char needle[10] = "aleykoum";
printf("%s",ft_strnstr(haystack, needle, 15));
}
*/
