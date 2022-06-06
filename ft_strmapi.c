/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:25:47 by sloghmar          #+#    #+#             */
/*   Updated: 2022/03/08 19:30:20 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Description : Applique la fonction ’f’ à chaque caractère de la chaîne de 
//caractères passée en argument pour créer une nouvelle chaîne de caractères 
//avec malloc résultant des applications successives de ’f’

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char ma_fonction(unsigned int i, char str)
 {
 	printf("Ma fonction: index = %d et  %c\n", i, str);
 	return (str);
 }

int main()
{
 	char str[10] = "hello";
 	printf("ma chaine est %s\n", str);
 	char *result = ft_strmapi(str, ma_fonction);
 	printf("le resultat est %s\n", result);
 	return 0;
 }
*/
