/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seepark <seepark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 09:51:58 by seepark           #+#    #+#             */
/*   Updated: 2021/04/08 15:27:43 by seepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int		main(void)
{
	unsigned	int i;
	char dest[] = "apple";
	char src[] = "pine";
	
	i = 0;
	printf("%u\n", ft_strlcat(dest, src, 1));
	printf("%lu\n", strlcat(dest, src, 1));
	while (dest[i])
	{	printf("%c", dest[i]);
		i++;
	}
	return (0);
}
