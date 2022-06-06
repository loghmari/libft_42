/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 22:05:08 by sloghmar          #+#    #+#             */
/*   Updated: 2022/03/07 14:54:32 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Description : Alloue avec malloc et retourne une copie de la chaîne ’s1’, 
 * sans les caractères spécifié dans ’set’ au début et à la fin de la chaîne de 
 * caractères.
*/

int	ft_char_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	size_t	i;
	size_t	start;
	size_t	end;

	start = 0;
	while (s1[start] && ft_char_in_set(s1[start], set))
		start++;
	end = ft_strlen((char *)s1);
	while (end > start && ft_char_in_set(s1[end - 1], set))
		end--;
	dest = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (start < end)
		dest[i++] = s1[start++];
	dest[i] = 0;
	return (dest);
}
/*
int main ()
{
	char a[] = "hellosamihello";
	char set[] = "hlo";
	printf("%s\n", ft_strtrim(a, set));
}
*/
