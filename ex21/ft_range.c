/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 11:52:15 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/11/07 13:21:44 by flbeaumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	i;
	int	*range;
	int	size;

	if (min >= max)
		return (NULL);
	i = 0;
	size = (max - min);
	if (!(range = (int *)malloc(sizeof(int) * size)))
		return (NULL);
	while (i < size)
	{
		range[i] = min;
		++i;
		++min;
	}
	return (range);
}
