/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 17:30:23 by omakran           #+#    #+#             */
/*   Updated: 2024/05/07 18:14:34 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T, typename Func>
void    iter(T *arr, size_t len, Func func) {
    for (size_t i = 0; i < len; i++)
    {
        func(arr[i]);
    } 
}

template< typename T >
void print( T const & x ) {
    std::cout << x << std::endl;
    return;
}

#endif