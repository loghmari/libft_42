/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 10:51:25 by sloghmar          #+#    #+#             */
/*   Updated: 2022/02/28 13:35:26 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>
#include <stdio.h>
// Description :localise la première occurrence de c (converti en un char) dans
// 				 la chaîne pointée par s.caractère de fin null est considéré 
// 				 comme faisant partie de la chaîne.

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char) c)
			return ((char *)s);
		s++;
	}
	if ((char) c == '\0')
		return ((char *)s);
	return (0);
}
/*	
int main()
{
	printf("%c\n",*(ft_strchr("hello", 'l'))); 
	printf("%s", strchr("hello", 'l'));
}
*/
