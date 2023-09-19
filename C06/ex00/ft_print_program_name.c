/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaksel <uaksel@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:45:07 by uaksel            #+#    #+#             */
/*   Updated: 2023/09/19 13:58:35 by uaksel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = -1;
	argc++;
	while (argv[0][++i])
		write(1, &argv[0][i], 1);
	write(1, "\n", 1);
	return (0);
}
