/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seepark <seepark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:51:41 by seepark           #+#    #+#             */
/*   Updated: 2021/04/13 10:13:11 by seepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_base_error(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = 0;
		while (base[j])
		{
			if (base[i] == base[j] && i != j)
				return (0);
			j++;
		}
		if (base[i] == ' ' || base[i] == '\f' || base[i] == '\n' ||
				base[i] == '\r' || base[i] == '\t' || base[i] == '\v' ||
				base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	return (i);
}

int		change_base(char str, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (str == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int		i;
	int		minus;
	int		result;
	int		temp;
	int		len;

	i = 0;
	minus = 1;
	result = 0;
	if ((len = check_base_error(base)) >= 2)
	{
		while (('\t' <= *str && *str <= '\r') || *str == ' ')
			++str;
		while (*str == '+' || *str == '-')
			if (*(str++) == '-')
				minus *= -1;
		while ((temp = change_base(str[i], base)) != -1)
		{
			result = (result * len) + temp;
			i++;
			temp = change_base(str[i], base);
		}
		return (result * minus);
	}
	return (0);
}
