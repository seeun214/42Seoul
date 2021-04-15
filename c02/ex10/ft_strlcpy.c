/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seepark <seepark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 14:58:29 by seepark           #+#    #+#             */
/*   Updated: 2021/04/07 07:31:28 by seepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int index;
	unsigned int count;

	index = 0;
	count = 0;
	while (src[index] && index + 1 < size)
	{
		dest[index] = src[index];
		++index;
	}
	dest[index] = '\0';
	while (src[count])
		count++;
	return (count);
}
