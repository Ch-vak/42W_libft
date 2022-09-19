/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvakasir <cvakasir@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 12:49:09 by cvakasir          #+#    #+#             */
/*   Updated: 2021/06/23 17:00:48 by cvakasir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	char	val;

	val = (char) c;
	if (val >= 'a' && val <= 'z')
	{
		return (c - 32);
	}
	else
	{
		return (c);
	}
}