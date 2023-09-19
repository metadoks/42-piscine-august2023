/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaksel <uaksel@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:48:08 by uaksel            #+#    #+#             */
/*   Updated: 2023/09/19 13:58:24 by uaksel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	w;

	i = 0;
	w = 1;
	if (argc >= 2)
	{
		while (argv[w])
		{
			while (argv[w][i])
			{
				write (1, &argv[w][i], 1);
				i++;
			}
			write (1, "\n", 1);
			i = 0;
			w++;
		}
	}
	return (0);
}
