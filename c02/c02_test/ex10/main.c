/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seepark <seepark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 15:08:39 by seepark           #+#    #+#             */
/*   Updated: 2021/04/06 16:20:56 by seepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int		main(void)
{
	char *a = "ddfes";
	char b[1];

	ft_strlcpy(b, a, 4);
	printf("%s\n", b);
	return (0);
}
