/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seepark <seepark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 01:39:29 by seepark           #+#    #+#             */
/*   Updated: 2021/04/08 13:25:32 by seepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *p_str;
	char *p_to_find;

	if (!*to_find)
		return (str);
	while (*str)
	{
		p_str = str;
		p_to_find = to_find;
		while (*p_str && *p_str == *p_to_find)
		{
			p_str++;
			p_to_find++;
		}
		if (*p_to_find == 0)
			return (str);
		str++;
	}
	return (0);
}
