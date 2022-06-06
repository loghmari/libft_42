/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloghmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:39:55 by sloghmar          #+#    #+#             */
/*   Updated: 2022/03/02 19:23:30 by sloghmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Description :met à 0 les n premiers octets du bloc pointé par s
#include<stdlib.h>
#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	char	*b;
	size_t	i;

	i = 0;
	b = (char *)s;
	while (n > i)
	{
		b[i] = 0;
		i++;
	}
}
/*
int main(void)
{
	char str[50] = "helloworld";	
	ft_bzero(str, 2);
	printf("%s", str);
	return (0);
*/
