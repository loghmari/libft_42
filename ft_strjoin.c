/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 20:34:20 by sloghmar          #+#    #+#             */
/*   Updated: 2022/03/28 14:28:06 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/* Description : Alloue avec malloc et retourne une nouvelle chaîne, 
 				 résultat de la concaténation de s1 et s2.
FONCTIONNEMENT : *Nous mettons les deux variables de compteur à 0 car nous 
voulons que les deux compteurs commencent au début de leurs chaînes respectives.
Nous allouons ensuite de la mémoire en utilisant la fonction malloc avec une 
combinaison de l'utilisation de nos fonctions ft_strlen faites précédemment. 
Nous utilisons la fonction ft_strlen sur les deux chaînes de paramètres pour 
déterminer la longueur totale d'une *concaténation et nous ajoutons 1 à cette 
longueur pour nous assurer que nous pouvons d'ajouter un '\0' final. 
Si l'allocation a échoué, nous retournons NULL.*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		i;
	int		j;

	i = 0;
	j = 0;
	dest = malloc(sizeof(*dest) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!dest)
		return (NULL);
	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		dest[i + j] = s2[j];
		j++;
	}
	dest[i + j] = '\0';
	free(s1);
	return (dest);
}
/*
int main()
{
	char a[6] = "abcde";
	char b[6] = "fghij";
	printf("%s", ft_strjoin(a, b));
}
*/
