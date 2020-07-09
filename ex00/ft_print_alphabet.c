/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtshuku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 09:04:17 by thtshuku          #+#    #+#             */
/*   Updated: 2020/07/09 10:49:28 by thtshuku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_putchar(char c)
	{
	write (1, &c, 1);
	}
	

void ft_print_alphabet(void)
{
		
		int l;
		l='a';	

		while (l <= 'z')
		{ 
		ft_putchar(l);
		l++;
		}
}
