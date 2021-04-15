/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seepark <seepark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 20:32:00 by seepark           #+#    #+#             */
/*   Updated: 2021/04/13 09:46:16 by seepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		error(char *base)
{
	int	i;
	int	j;

	if (!base)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			++j;
		}
		++i;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	change_base(int nbr, char *base, unsigned int s_len)
{
	unsigned int	nb;

	if (nbr < 0)
	{
		ft_putchar('-');
		nb = nbr * -1;
	}
	else
		nb = nbr;
	if (nb >= s_len)
		change_base(nb / s_len, base, s_len);
	ft_putchar(base[nb % s_len]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	s_len;

	if (!error(base))
		return ;
	s_len = error(base);
	change_base(nbr, base, s_len);
}
