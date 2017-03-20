/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opodolia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 17:28:00 by opodolia          #+#    #+#             */
/*   Updated: 2017/03/20 21:05:06 by opodolia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 32
# include "libft/includes/libft.h"

typedef	struct		s_get
{
	void			*content;
	size_t			content_size;
	struct s_get	*next;
	int				fd;
}					t_get;

int					get_next_line(const int fd, char **line);

#endif
