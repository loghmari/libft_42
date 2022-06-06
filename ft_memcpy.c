/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 10:45:54 by sloghmar          #+#    #+#             */
/*   Updated: 2022/02/24 11:58:34 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
// Description : copie n octets depuis la zone mémoire src vers la zone 
// mémoire dest. Les deux zones ne doivent pas se chevaucher.

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*source;
	size_t				i;

	dest = dst;
	source = src;
	i = 0;
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dst);
}
/*
int main()
{
 char a[]  = "bonjour";
 char b[]  = "aurevoir";
 printf("%s", ft_memcpy(b, a, 4));
 }
*/
