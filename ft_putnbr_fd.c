/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 20:29:14 by sloghmar          #+#    #+#             */
/*   Updated: 2022/03/08 21:32:56 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Description : Écrit l’entier ’n’ sur le descripteur de fichier donné.

void	ft_putnbr_fd(int n, int fd)
{
	long int	i;

	i = n;
	if (i < 0)
	{
		ft_putchar_fd('-', fd);
		i = i * -1;
	}
	if (i > 9)
	{
		ft_putnbr_fd(i / 10, fd);
	}
	ft_putchar_fd((i % 10) + '0', fd);
}
/*
int main()
{
	long n;
	n = -456;
	ft_putnbr_fd(n, 1);
	return(0);
}
*/
