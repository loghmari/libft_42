/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 09:24:06 by sloghmar          #+#    #+#             */
/*   Updated: 2022/03/04 10:37:24 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
// Description : strdup copiera chaque caractère, un à un, jusqu'à  '\0'. 
// 				 il sera lui aussi copié.
// la fonction strdup alloue une nouvelle zone de mémoire via la fonction malloc
//  afin d'y copier la chaîne de caractères initiale

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*dest;
	int		i;

	len = 0;
	i = 0;
	while (s1[len] != '\0')
		len++;
	dest = (char *)malloc(sizeof(*s1) * (len + 1));
	if (!dest)
		return (NULL);
	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int main()
{
	char a[10] = "salamsami";
	printf("avant malloc %s\n", a);
	printf("apres malloc \n");
	printf("%s", ft_strdup(a));
}
*/
