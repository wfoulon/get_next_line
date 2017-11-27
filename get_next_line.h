/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfoulon <wfoulon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 15:47:58 by wfoulon           #+#    #+#             */
/*   Updated: 2017/11/24 15:48:05 by wfoulon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 42
# define EOL '\n'
# include "libft.h"
# include <sys/uio.h>
# include <fcntl.h>
# include <sys/types.h>
# include <stdio.h>

typedef struct 			s_line
{
		int				fd;
		char			*line;
		struct s_line	*next;
}						t_line

int						get_next_line(const int fd, char **line);

#endif