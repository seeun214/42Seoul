/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seepark <seepark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 20:57:20 by seepark           #+#    #+#             */
/*   Updated: 2021/04/08 22:26:08 by seepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int d_len;
	unsigned int s_len;

	i = 0;
	d_len = 0;
	s_len = 0;
	while (dest[d_len])
		++d_len;
	while (src[s_len])
		++s_len;
	while (src[i] && d_len + i + 1 < size)
	{
		dest[d_len + i] = src[i];
		i++;
	}
	dest[d_len + i] = 0;
	if (size <= d_len)
		return (s_len + size);
	else
		return (s_len + d_len);
}
