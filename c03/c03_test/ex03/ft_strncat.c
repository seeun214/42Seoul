/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seepark <seepark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 01:29:53 by seepark           #+#    #+#             */
/*   Updated: 2021/04/08 13:43:47 by seepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	char *temp;

	i = 0;
	temp = dest;
	while (*temp)
		temp++;
	while (src[i] && i < nb)
	{
		*temp = *src;
		++temp;
		++src;
		++i;
	}
	*temp = 0;
	return (dest);
}
