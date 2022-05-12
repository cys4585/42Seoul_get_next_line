/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngcho <youngcho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:18:02 by youngcho          #+#    #+#             */
/*   Updated: 2022/05/12 13:51:35 by youngcho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	int				fd;
	char			*str;
	char			*backup_str;
	struct s_list	*prev;
	struct s_list	*next;
}	t_list;

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char const *old_str, char const *buf);
char	*split_nl(char *str, char **backup_str);

void	lstadd_back(t_list **lst, int fd, char *str, char **backup_str);
char	*read_one_cycle(int fd, char **backup_str);
char	*get_str_from_lst(t_list *node, int fd);
char	*get_next_line(int fd);

#endif