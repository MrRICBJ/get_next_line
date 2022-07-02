/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 16:45:03 by bjanette          #+#    #+#             */
/*   Updated: 2021/11/29 17:32:31 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s);
int		ft_n(char *last);
char	*ft_read(int fd, char *buf, char *last);
char	*get_next_line(int fd);
size_t	ft_strlen(const char *s);
char	*ft_before_n(char *last);
size_t	ft_strlcpy(char *d, const char *s, size_t n);
char	*ft_after_n(char *last);
#endif