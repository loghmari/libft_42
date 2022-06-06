/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 09:49:47 by sloghmar          #+#    #+#             */
/*   Updated: 2022/03/11 17:26:50 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
// Description :remplit les 'len' premiers octets de la zone 
// 				mémoire pointée par s avec l'octet c. 

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	str = b;
	i = 0;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (b);
}

/*
  int	main(void)
{
	char	str[]= "Hello world";

	printf("%s", ft_memset(str, 97, 3));
}
*/
