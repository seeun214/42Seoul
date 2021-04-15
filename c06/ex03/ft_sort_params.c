/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seepark <seepark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 01:04:45 by seepark           #+#    #+#             */
/*   Updated: 2021/04/13 18:35:43 by seepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort(int argc, char *argv[])
{
	int			i;
	int			j;
	char		*temp;

	i = 2;
	while (i < argc)
	{
		j = 2;
		while (j < argc)
		{
			if (ft_strcmp(argv[j - 1], argv[j]) < 0)
			{
				temp = argv[j - 1];
				argv[j - 1] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int		main(int argc, char *argv[])
{
	ft_sort(argc, argv);
	while (--argc)
	{
		while (*argv[argc])
			write(1, argv[argc]++, 1);
		write(1, "\n", 1);
	}
	return (0);
}
