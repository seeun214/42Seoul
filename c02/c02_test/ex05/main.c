/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seepark <seepark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 12:54:48 by seepark           #+#    #+#             */
/*   Updated: 2021/04/03 12:55:34 by seepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_str_is_uppercase(char *str);

int     main(void)
{
        char *a = "APPLE";
        char *b = "slERjlQ";
        char *c = "\0";

        printf("%d\n", ft_str_is_uppercase(a));
        printf("%d\n", ft_str_is_uppercase(b));
        printf("%d\n", ft_str_is_uppercase(c));
        return (0);
}
