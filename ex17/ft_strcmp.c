/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 17:23:11 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/11/07 10:50:50 by flbeaumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1++ == *s2++)
	{
		if (!(*s1 && *s2))
			return (0);
	}
	return (*--s1 - *--s2);
}
