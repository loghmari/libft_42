/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:04:45 by sloghmar          #+#    #+#             */
/*   Updated: 2022/03/14 09:50:30 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//Description : permet de transformer une chaîne de caractères, représentant
// une valeur entière, en une valeur numérique de type int . Le terme d' atoi 
// est un acronyme signifiant : ASCII to integer. la fonction atoi retourne la 
// valeur 0 si la chaîne de caractères ne contient pas une représentation de
//  valeur numérique.
// Aide : 'sign' est utiliser si str est negative.

int	ft_atoi(const char *str)
{
	long	i;
	long	resultat;
	long	sign;

	i = 0;
	sign = 1;
	resultat = 0;
	if (!str)
		return (0);
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\r' || str[i] == '\f' || str[i] == '\a' || str[i] == '\b')
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultat = (resultat * 10) + str[i] - 48;
		i++;
	}
	return (resultat * sign);
}
/*
int	main (void)
{
	char	*a = "-+42";

	printf("%d", ft_atoi(a));
}
*/
