/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaksel <uaksel@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 22:35:31 by uaksel            #+#    #+#             */
/*   Updated: 2023/09/01 23:02:58 by uaksel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_horizontal(int x, char sol, char orta, char sag)
{
	if (x-- >= 1)
	{
		ft_putchar(sol);
		while (x-- >= 2)
			ft_putchar(orta);
		if (x == 0)
			ft_putchar(sag);
		ft_putchar('\n');
	}
}

void	print_vertical(int x, int y, char duvar)
{
	int	i;

	while (y-- > 2)
	{
		ft_putchar(duvar);
		i = 2;
		while (x > i++)
			ft_putchar(' ');
		ft_putchar(duvar);
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (y >= 1)
		print_horizontal(x, '/', '*', '\\');
	print_vertical(x, y, '*');
	if (y >= 2)
		print_horizontal(x, '\\', '*', '/');
}
