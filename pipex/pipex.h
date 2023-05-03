/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afraccal <afraccal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 12:35:12 by afraccal          #+#    #+#             */
/*   Updated: 2023/03/16 10:15:30 by afraccal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "libft/libft.h"
# include "ft_printf/ft_printf.h"
# include <stdarg.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <sys/wait.h>
# include <sys/types.h>
# include <string.h>
# include <errno.h>

typedef struct s_pipex
{
	char	**path;
	int		file1;
	int		file2;
	char	*command;
	char	**cmd_args;
	int		fd[2];
}	t_pipex;

void	path(char *envp[], t_pipex *pipex);
char	*get_cmd(char **paths, char *cmd);
void	free_all(t_pipex *pipex);
void	child_free(t_pipex *pipex);
int		msg(char *err);
void	msg_error(char *err);
#endif
