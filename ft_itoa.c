/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 09:58:16 by sloghmar          #+#    #+#             */
/*   Updated: 2022/03/14 12:08:39 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Description : alloue avec malloc et transforme un int en chaine de caractere
//ft_intlen clacul d abord la longueur du int et ensuite on alloue avec malloc
//la longueur du int + 1, et on fait un un style de putnbr.
int	ft_intlen(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	long	nbr;	

	nbr = n;
	len = ft_intlen(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	len--;
	if (nbr == 0)
		str[len] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = nbr * -1;
	}
	while (nbr > 0)
	{
		str[len] = nbr % 10 + '0';
		len--;
		nbr = nbr / 10;
	}
	return (str);
}
/*
int main()
{
	int a = 1234;
	int b = -456;
	int c = 0;
	printf("%s\n", ft_itoa(a));
	printf("%s\n", ft_itoa(b));
	printf("%s\n", ft_itoa(c));
}
*/
