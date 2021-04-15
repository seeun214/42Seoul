/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seepark <seepark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 13:04:47 by seepark           #+#    #+#             */
/*   Updated: 2021/04/08 13:07:38 by seepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char str1[] = "Hello World";
	char str2[] = "llo";

	printf("%s\n", ft_strstr(str1, str2));
	printf("%s\n", strstr(str1, str2));
	return (0);
}
