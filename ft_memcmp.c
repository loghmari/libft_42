/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 11:43:17 by sloghmar          #+#    #+#             */
/*   Updated: 2022/03/11 17:26:04 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Description : compare les n premiers octets des zones mémoire s1 et s2. 
// 				Elle renvoie un entier inférieur, égal, ou supérieur à zéro, 
// 				si s1 est respectivement inférieure, égale ou supérieur à s2.  

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return ((((unsigned char *)s1)[i]) - (((unsigned char *)s2)[i]));
		i++;
	}
	return (0);
}
/*
int main()
{
char c[] = "hellololo";
char b[] = "hellopopo";
printf("%d\n", ft_memcmp(c, b, 6));
}
*/
