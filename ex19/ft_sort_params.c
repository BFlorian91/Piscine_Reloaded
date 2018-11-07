/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbeaumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 10:49:08 by flbeaumo          #+#    #+#             */
/*   Updated: 2018/11/07 12:50:46 by flbeaumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char **str, int i, int j)
{
	i = 1;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
			ft_putchar(str[i][j++]);
		ft_putchar('\n');
		++i;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1++ == *s2++)
	{
		if (!(*s1) && !(s2))
			return (0);
	}
	return (*--s1 - *--s2);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*tmp;

	i = 2;
	j = 0;
	tmp = 0;
	if (argc > 1)
	{
		while (argv[i])
		{
			if (ft_strcmp(argv[i - 1], argv[i]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[i - 1];
				argv[i - 1] = tmp;
				i = 0;
			}
			++i;
		}
		ft_putstr(argv, i, j);
	}
	return (0);
}
