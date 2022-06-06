/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:58:41 by sloghmar          #+#    #+#             */
/*   Updated: 2022/03/11 18:26:35 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
// Description :Rechercher un caractère dans une chaîne et renvoie un pointeur 
// 				sur la dernière occurrence du caractère c dans la chaîne s.
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen((char *)s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
/*int main()
{
	printf("%c\n", *ft_strrchr("helo heli", 'e'));
	printf("%s", ft_strrchr("helo heli", 'e'));
}
*/
