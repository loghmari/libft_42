/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 08:55:52 by sloghmar          #+#    #+#             */
/*   Updated: 2022/03/11 17:35:38 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Description : converts a lower-case letter to upper-case letter.

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
