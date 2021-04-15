/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seepark <seepark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 14:40:50 by seepark           #+#    #+#             */
/*   Updated: 2021/04/07 02:58:51 by seepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	check_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

char	check_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

char	check_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	check_word(char c)
{
	if (check_lowercase(c))
		return (1);
	if (check_uppercase(c))
		return (1);
	if (check_num(c))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	flag = 1;
	i = 0;
	while (str[i])
	{
		if (!check_word(str[i]))
			flag = 1;
		else
		{
			if (flag && check_lowercase(str[i]))
				str[i] -= 32;
			else if (!flag && check_uppercase(str[i]))
				str[i] += 32;
			flag = 0;
		}
		i++;
	
	}
	return (str);
}
