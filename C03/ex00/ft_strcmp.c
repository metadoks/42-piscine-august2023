/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaksel <uaksel@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 00:47:39 by uaksel            #+#    #+#             */
/*   Updated: 2023/09/16 00:55:18 by uaksel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	a;

	a = 0;
	while (s1[a] == s2[a] && (s1[a] != '\0' || s2[a] != '\0'))
	{
		a++;
	}
	return (s1[a] - s2[a]);
}
/*
#include <stdio.h>
int main (void)
{
	char dizi1[]="hello";
	char dizi2[]="hello";
	int deger;
	deger = ft_strcmp(dizi1, dizi2);
	printf("\ndöndürülen değer:%d",deger);
	return (0);
}
*/