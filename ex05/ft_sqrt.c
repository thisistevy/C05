/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iung <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:38:32 by iung              #+#    #+#             */
/*   Updated: 2022/10/02 18:22:45 by iung             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	resultat;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	resultat = 2;
	if (nb >= 2)
	{
		while (resultat <= nb / resultat)
		{
			if ((resultat * resultat) == nb)
			{
				return (resultat);
			}
			resultat++;
		}
	}
	return (0);
}
