/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uaksel <uaksel@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 00:54:12 by uaksel            #+#    #+#             */
/*   Updated: 2023/09/16 00:59:15 by uaksel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while ((s1[a] != '\0' || s2[a] != '\0') && a < n)
	{
		if (s1[a] > s2[a])
			return (1);
		else if (s2[a] > s1[a])
			return (-1);
		a++;
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	char dizi0[]="12345";
	char dizi1[]="123456";
	char dizi2[]="12345";
	unsigned int n = 7;
	printf("dizi0 vs dizi1 = dondurulen deger:%d\n",ft_strncmp(dizi0,dizi1,n));
	printf("dizi1 vs dizi0 = dondurulen deger:%d\n",ft_strncmp(dizi1,dizi0,n));
	printf("dizi0 vs dizi2 = dondurulen deger:%d\n",ft_strncmp(dizi0,dizi2,n));
}
*/