/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seepark <seepark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 12:11:11 by seepark           #+#    #+#             */
/*   Updated: 2021/04/06 09:53:02 by seepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int     ft_str_is_numeric(char *str);

int     main(void)
{
        char *a = "280328";
        char *b = "He30";
        char *c = "\0";

        printf("%d\n", ft_str_is_numeric(a));
        printf("%d\n", ft_str_is_numeric(b));
        printf("%d\n", ft_str_is_numeric(c));
}               
