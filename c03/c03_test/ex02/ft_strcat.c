/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seepark <seepark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 14:11:46 by seepark           #+#    #+#             */
/*   Updated: 2021/04/08 13:48:17 by seepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char *temp;

	temp = dest;
	while (*temp)
		temp++;
	while (*src)
	{
		*temp = *src;
		++temp;
		++src;
	}
	*temp = '\0';
	return (dest);
}
