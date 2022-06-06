/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 08:45:55 by sloghmar          #+#    #+#             */
/*   Updated: 2022/02/23 09:45:05 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Description: converts an upper-case letter to lower-case letter.

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
