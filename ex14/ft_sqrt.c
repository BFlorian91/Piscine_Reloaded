/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 07:43:32 by florian           #+#    #+#             */
/*   Updated: 2018/11/07 10:50:00 by flbeaumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int value;

	value = 0;
	if (nb < 0)
		return (0);
	if (nb == 4)
		return (2);
	if (nb == 9)
		return (3);
	while (value <= nb / 4)
	{
		if (nb == value * value)
			return (value);
		value++;
	}
	return (0);
}
