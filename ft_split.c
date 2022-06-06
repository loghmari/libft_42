/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 11:56:10 by sloghmar          #+#    #+#             */
/*   Updated: 2022/03/11 17:30:00 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//DESCRIPTION : Alloue avec malloc et retourne un tableau
//de chaînes de caractères obtenu en séparant ’s’ à l’aide du caractère ’c’, 
//utilisé comme délimiteur. Le tableau doit être terminé par NULL.
//FT_NOMBRE_DE_MOTS : on creer i pour se deplacer dans la string et count pour
//compter le nombre de mots. des qu'on arrive sur c on fait count++ et on 
//continu la string jusqu'a la fin.

int	ft_nbr_mots(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

char	*ft_malloc_string(char const *s, int i)
{
	int		j;
	char	*str;

	str = (char *)malloc(sizeof(char) * i + 1);
	if (!str)
		return (NULL);
	j = 0;
	while (*s && i)
	{
		str[j] = s[j];
		i--;
		j++;
	}
	str[j] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		words;

	i = 0;
	j = 0;
	words = ft_nbr_mots(s, c);
	tab = (char **)malloc(sizeof(char *) * (words + 1));
	if (!tab)
		return (NULL);
	while (*s)
	{
		i = 0;
		while (*s && *s == c)
			s++;
		while (s[i] && s[i] != c)
			i++;
		if (i)
			tab[j++] = ft_malloc_string(s, i);
		s = s + i;
	}
	tab[j] = 0;
	return (tab);
}
/*
int main()
{
  char **tab;
  char a[] = "";
  char c = 'm';
  int i;

  i=0;
  tab = ft_split(a,c);
  while (tab[i] != 0)
  	printf("%s\n", tab[i++]);
}
*/
