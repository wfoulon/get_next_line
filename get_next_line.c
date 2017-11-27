/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfoulon <wfoulon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 10:55:06 by wfoulon           #+#    #+#             */
/*   Updated: 2017/11/27 10:55:31 by wfoulon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

t_line		*init_list(const int fd)
{
	t_line	*new;

	if (!(new = (t_line *)malloc(sizeof(t_line))))
		return (NULL);
	new->fd = fd;
	new->line = ft_strnew(0);
	new->next = NULL;
	return (new);
}

void	add_element(t_line *list, t_line *new)
{
	while (list)
	{
		if (list->next == NULL)
		{
			list->next = new;
			new->next = NULL;
		}
		list = list->next;
	}
}

char	*init_line(t_line *list, char **line)
{
	char	*tmp;
	char	*txt;
	int 	i;

	tmp = NULL;
	i = 0;
	text = list->line;
	while (txt[i])
	{
		if (txt[i] == EOL)
		{
			*line = ft_strsub(txt, 0, i);
			tmp = txt;
			txt = ft_strdup(txt + (i + 1));
			free(tmp);
			return (txt);
		}
		i++;
	}
	*line = ft_strdup(txt);
	ft_strclr(txt);
	ft_strclr(list->line);
	return (txt);
}