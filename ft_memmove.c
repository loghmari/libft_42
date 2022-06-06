/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 12:33:14 by sloghmar          #+#    #+#             */
/*   Updated: 2022/03/11 17:54:09 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

// Description : copie len octets depuis la zone mémoire src vers la zone
//  			mémoire dst. Les deux zones peuvent se chevaucher : la copie se 
//  			passe comme si les octets de src étaient d'abord copiés dans 
//  			une zone temporaire qui ne chevauche ni src ni dest, et les 
//  			octets sont ensuite copiés de la zone temporaire vers dest.  

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	if (d > s)
	{
		d = dst + len;
		s = s + len;
		while (len--)
			*--d = *--s;
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
/*
int main()
{
	char c[] = "hello";
	char b[] = "papa";
	printf("%s",ft_memmove(c, b, 3));
}
*/
