/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 19:32:52 by sloghmar          #+#    #+#             */
/*   Updated: 2022/03/08 19:54:33 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Description : Cette fonction applique la fonction f du paramètre à chaque 
//caractère d'une chaîne de caractères également passée en paramètre à la 
//position exacte de l'index de ce caractère. Chaque caractère qui est passé 
//dans la fonction f est modifié si nécessaire.

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != 0)
	{
		f(i, s + i);
		i++;
	}
}
/*
void my_fonction(unsigned int i, char *str)
{
 	printf("Ma fonction :  index = %d et la chaine  %s\n", i, str);
}

int main()
{
 	char str[10] = "salam";
	printf("resultat  %s\n", str);
 	ft_striteri(str, my_fonction);
 	printf("resultat avec la fonction  %s\n", str);
 	return 0;
}
*/
