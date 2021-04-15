/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seepark <seepark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 14:06:39 by seepark           #+#    #+#             */
/*   Updated: 2021/04/08 14:18:43 by seepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*temp;

	i = 0;
	temp = dest;
	while (*temp)
		++temp;
	while (*src && i < nb)
	{
		*temp = *src;
		++temp;
		++src;
		++i;
	}
	*temp = 0;
	return (dest);
}
