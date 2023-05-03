/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afraccal <afraccal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 12:36:22 by afraccal          #+#    #+#             */
/*   Updated: 2023/03/16 10:15:32 by afraccal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	check_arg(int argc, char **argv, t_pipex *pipex)
{
	if (argc != 5)
	{
		(msg("Invalid number of arguments.\n"));
		exit (0);
	}
	if (access(argv[1], F_OK) == 0)
	{
		pipex->file1 = open(argv[1], O_RDONLY);
		if (pipex->file1 < 0)
			msg_error("Infile");
			pipex->file2 = open(argv[4], O_TRUNC | O_CREAT | O_RDWR);
		if (pipex->file2 < 0)
			msg_error("Outfile");
		return ;
	}
	ft_printf("zs: %s: %s\n", strerror(errno), argv[1]);
	exit (0);
}

void	child1(t_pipex pipex, char **argv, char **envp)
{
	dup2(pipex.fd[1], 1);
	close(pipex.fd[0]);
	dup2(pipex.file1, 0);
	pipex.cmd_args = ft_split(argv[2], ' ');
	pipex.command = get_cmd(pipex.path, pipex.cmd_args[0]);
	if (!pipex.command)
	{
		child_free(&pipex);
		msg("Command not found\n");
		exit(1);
	}
	execve(pipex.command, pipex.cmd_args, envp);
}

void	child2(t_pipex pipex, char **argv, char **envp)
{
	dup2(pipex.fd[0], 0);
	close(pipex.fd[1]);
	dup2(pipex.file2, 1);
	pipex.cmd_args = ft_split(argv[3], ' ');
	pipex.command = get_cmd(pipex.path, pipex.cmd_args[0]);
	if (!pipex.command)
	{
		child_free(&pipex);
		msg("Command not found\n");
		exit(1);
	}
	execve(pipex.command, pipex.cmd_args, envp);
	return ;
}

int	main(int argc, char **argv, char *envp[])
{
	pid_t	p1;
	pid_t	p2;
	t_pipex	pipex;

	check_arg(argc, argv, &pipex);
	path(envp, &pipex);
	pipe(pipex.fd);
	if (pipe(pipex.fd) < 0)
		msg_error("Pipe");
	p1 = fork();
	if (p1 == 0)
		child1(pipex, argv, envp);
	p2 = fork();
	if (p2 == 0)
	{
		waitpid(p1, NULL, 0);
		child2(pipex, argv, envp);
	}
	close(pipex.file1);
	close(pipex.file2);
	close(pipex.fd[1]);
	close(pipex.fd[0]);
	free_all(&pipex);
}
