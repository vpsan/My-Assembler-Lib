/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhatches <bhatches@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 22:02:00 by bhatches          #+#    #+#             */
/*   Updated: 2021/09/07 23:45:03 by bhatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

# include <stdlib.h>
# include <errno.h>
# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>

size_t  ft_strlen(const char *s);
char    *ft_strcpy(char *dst, const char *src);
int     ft_strcmp(const char *s1, const char *s2);
char	*ft_strdup(const char *s);
ssize_t	ft_write(int fd, const void *buf, size_t count_bytes);
ssize_t	ft_read(int fd, void *buf, size_t count_bytes);

#endif
