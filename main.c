/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhatches <bhatches@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 22:02:03 by bhatches          #+#    #+#             */
/*   Updated: 2021/04/20 23:27:45 by bhatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "includes/libasm.h"

void    test_strlen(void)
{
    char    *s0 = "";
    char    *s1 = "1";
    char    *s2 = "22";
    char    *s3 = "333";

    printf("################ START test_strlen: ################\n");

    printf("--- strings:\n");
    printf("s0 = %s\n", s0);
    printf("s1 = %s\n", s1);
    printf("s2 = %s\n", s2);
    printf("s3 = %s\n", s3);

    printf("--- strlen(strings):\n");
    printf("strlen(s0) = %lx\n", strlen(s0));
    printf("strlen(s1) = %lx\n", strlen(s1));
    printf("strlen(s2) = %lx\n", strlen(s2));
    printf("strlen(s3) = %lx\n", strlen(s3));
    
    printf("--- ft_strlen(strings):\n");
    printf("strlen(s0) = %lx\n", ft_strlen(s0));
    printf("strlen(s1) = %lx\n", ft_strlen(s1));
    printf("strlen(s2) = %lx\n", ft_strlen(s2));
    printf("strlen(s3) = %lx\n", ft_strlen(s3));

    printf("################ END test_strlen: ################\n");
    return ;
}

void	test_strcpy(void)
{

	return ;
}

int main(void)
{
    test_strlen();
    test_strcpy();
    return (0);
}
