/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 20:23:00 by sloghmar          #+#    #+#             */
/*   Updated: 2022/03/11 17:29:03 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//Description : Écrit La chaîne de caractères ’s’ sur le descripteur de fichier
//				 donné suivie d’un retour à la ligne.

void	ft_putendl_fd(char *s, int fd)
{
	while (*s != '\0')
	{
		write(fd, s, 1);
		s++;
	}
	write(fd, "\n", 1);
}
