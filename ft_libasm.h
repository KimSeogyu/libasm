/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libasm.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seogkim <seogkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 15:29:32 by seogkim           #+#    #+#             */
/*   Updated: 2020/12/17 15:42:08 by seogkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBASM_H
#define FT_LIBASM_H
#include "sys/errno.h"
#include <stdlib.h>
#include <unistd.h>

size_t ft_strlen(const char *s);
char *ft_strcpy(char *dst, const char *src);
int ft_strcmp(const char *s1, const char *s2);
ssize_t ft_write(int fildes, const void *buf, size_t nbyte);
ssize_t ft_read(int fildes, void *buf, size_t nbyte);
char *ft_strdup(const char *s1);

#endif